#include <Arduino.h>
#include <ArduinoJson.h> //https://arduinojson.org/v6/assistant/
#include <Free_Fonts.h>
#include <HTTPClient.h>
#include <SPI.h>
#include <TFT_eSPI.h>
#include <WiFi.h>
#include <Wire.h>
#include <config.h>
#include <esp_wifi.h>
#include <map>
// #include <Fonts/GothamBook_12.h>
// #include <Fonts/GothamBook_5.h>
// #include <Fonts/GothamBook_7.h>
#include <Fonts/GothamBook_9.h>
#include <Knackles/knackles001.h>
#include <Knackles/knackles002.h>
#include <Knackles/knackles003.h>
#include <Knackles/knackles004.h>
#include <Knackles/knackles005.h>
#include <Knackles/knackles006.h>
#include <Knackles/knackles007.h>
#include <Knackles/knackles008.h>

#define LED_ON HIGH
#define LED_OFF LOW

#ifndef TFT_DISPOFF
#define TFT_DISPOFF 0x28
#endif

#ifndef TFT_SLPIN
#define TFT_SLPIN 0x10
#endif

#define TFT_MOSI 19
#define TFT_SCLK 18
#define TFT_CS 5
#define TFT_DC 16
#define TFT_RST 23

#define TFT_BL 4 // Display backlight control pin
#define ADC_EN 14
#define ADC_PIN 34
#define BUTTON_1 35
#define BUTTON_2 0

// Supposed dimensions
#define SCREEN_HEIGHT 135
#define SCREEN_WIDTH 240

const char *GpuTemperatureString = "GPU Temperature";
const char *GpuClockString = "GPU Clock";
const char *GpuUsageString = "GPU Core Load";
int GpuTemperatureIteratorValue, GpuClockIteratorValue, GpuUsageIteratorValue = -1;

bool foundSensorData = false;
int sensorValueArray[2];

TFT_eSPI tft = TFT_eSPI(SCREEN_HEIGHT, SCREEN_WIDTH);
HTTPClient http;

const size_t capacity = JSON_ARRAY_SIZE(221) + 221 * JSON_OBJECT_SIZE(6) + 18290;
DynamicJsonDocument doc(capacity);

void ConnectToWifi();
void DrawKnuckles();
void GetJsonData();
void SetSensorValueArray(DynamicJsonDocument dynamicJsonDocument);

auto images = {knackles001, knackles002, knackles003, knackles004, knackles005, knackles006, knackles007, knackles008};

void setup()
{

    Serial.begin(115200);

    tft.init();
    tft.setRotation(1);
    tft.setSwapBytes(true);
    tft.fillScreen(TFT_BLACK);

    ConnectToWifi();
}

void loop()
{
    // if (WiFi.status() != WL_CONNECTED)
    // {
    //     ConnectToWifi();
    // }
    DrawKnuckles();
    delay(20);
    DrawKnuckles();
    GetJsonData();
}

/* ========================================================= */

void ConnectToWifi()
{
    String connecting = "Connecting to Wifi";
    if ((WiFi.status() != WL_CONNECTED))
    {
        WiFi.begin(WIFI_SSID, WIFI_PASSWD);
        while (WiFi.status() != WL_CONNECTED)
        {
            // Serial.print('.');
            Serial.println(WiFi.status());
            delay(500);
            tft.setTextColor(TFT_WHITE, TFT_BLACK);
            tft.drawString(connecting, 10, 0);
            connecting += ".";
        }
    }

    Serial.print(F("Connected. My IP address is: "));
    Serial.println(WiFi.localIP());
    tft.fillScreen(TFT_BLACK);
}

void SetSensorValueArray(DynamicJsonDocument dynamicJsonDocument)
{
    auto NumberOfEntries = dynamicJsonDocument["hwinfo"]["readings"].size();
    for (int i = 0; i < NumberOfEntries; i++)
    {
        if (dynamicJsonDocument["hwinfo"]["readings"][i]["labelOriginal"] == GpuTemperatureString)
        {
            GpuTemperatureIteratorValue = i;
            Serial.println("Got Gpu Temperature Iterator " + String(GpuTemperatureIteratorValue));
        }
        else if (dynamicJsonDocument["hwinfo"]["readings"][i]["labelOriginal"] == GpuClockString)
        {
            GpuClockIteratorValue = i;
            Serial.println("Got Gpu Clock Iterator " + String(GpuClockIteratorValue));
        }
        else if (dynamicJsonDocument["hwinfo"]["readings"][i]["labelOriginal"] == GpuUsageString)
        {
            GpuUsageIteratorValue = i;
            Serial.println("Got Gpu Clock Iterator " + String(GpuUsageIteratorValue));
        }
        
    }

    // If both values have been set
    if (GpuTemperatureIteratorValue >= 0 && GpuClockIteratorValue >= 0 && GpuUsageIteratorValue >= 0)
    {
        foundSensorData = true;
        Serial.println("FOUND ALL SENSOR DATA FOUND");
    }
}

void GetJsonData()
{
    http.begin(ENDPOINT_URL);
    int httpCode = http.GET();

    if (httpCode > 0)
    {
        // Refactor the code in this conditional into a String parseJson (String
        // jsonVal) { xxx }
        String payload = http.getString();
        // // Removing a comma from position 2 as this is a bug from the remotehwinfo app when disabling HWInfo JSON
        // // results
        // payload.remove(2, 1);
       
        DeserializationError deserializationError = deserializeJson(doc, payload);
        if (deserializationError)
        {
            Serial.println("deserialization failed");
            Serial.println("HTTP Code: " + String(httpCode));
            return;
        }

        if (!foundSensorData)
        {
            Serial.println("Getting Sensor Data Iterators");
            SetSensorValueArray(doc);
        }

        String GpuTempSensorValue = doc["hwinfo"]["readings"][GpuTemperatureIteratorValue]["value"];
        String GpuClockSensorValue = doc["hwinfo"]["readings"][GpuClockIteratorValue]["value"];
        String GpuUsageSensorValue = doc["hwinfo"]["readings"][GpuUsageIteratorValue]["value"];

        String gpuTemp = String(GpuTempSensorValue) + " C";
        String gpuClockSpeed = String(GpuClockSensorValue) + " MHz";
        String gpuUsage = String(GpuUsageSensorValue) + "%";

        tft.setFreeFont(&GothamBook9pt7b);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        int padding = tft.textWidth(String(GpuTemperatureString),
                                    GFXFF); // get the width of the text in pixels
        tft.setTextPadding(padding);
        tft.drawString("GPU Temp", 140, 5);
        tft.drawString(gpuTemp, 140, 25);
        tft.drawString("GPU Clock", 140, 50);
        tft.drawString(gpuClockSpeed, 140, 70);
        tft.drawString("GPU Usage", 140, 95);
        tft.drawString(gpuUsage, 140, 115);
    }
    else
    {
        Serial.println("Bad Error Code: " + String(httpCode));
    }
}

void DrawKnuckles()
{
    for (auto it = begin(images); it != end(images); ++it)
    {
        tft.pushImage(0, 0, 135, 135, *it);
        delay(20);
    }
}