#include <Arduino.h>
#include <ArduinoJson.h> //https://arduinojson.org/v6/assistant/
#include <Free_Fonts.h>
#include <HTTPClient.h>
#include <MillisTimer.h>
#include <SPI.h>
#include <TFT_eSPI.h>
#include <WiFi.h>
#include <Wire.h>
#include <config.h>
#include <esp_wifi.h>
#include <map>
#include <vector>
// #include <Fonts/GothamBook_12.h>
// #include <Fonts/GothamBook_5.h>
// #include <Fonts/GothamBook_7.h>
#include <Fonts/GothamBook_9.h>
// #include <Knackles/knackles001.h>
// #include <Knackles/knackles002.h>
// #include <Knackles/knackles003.h>
// #include <Knackles/knackles004.h>
// #include <Knackles/knackles005.h>
// #include <Knackles/knackles006.h>
// #include <Knackles/knackles007.h>
// #include <Knackles/knackles008.h>
#include <EVGA_GIF/EVGA_0.h>
#include <EVGA_GIF/EVGA_1.h>
#include <EVGA_GIF/EVGA_2.h>
#include <EVGA_GIF/EVGA_3.h>
#include <EVGA_GIF/EVGA_4.h>
#include <EVGA_GIF/EVGA_5.h>
#include <EVGA_GIF/EVGA_6.h>
#include <EVGA_GIF/EVGA_7.h>

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

struct SENSOR_DATA {
    String label;
    String value;
    String unit;
};

std::vector<SENSOR_DATA> sensorsVector;
const char *GpuTemperatureString = "GPU Temperature";
const char *GpuClockString = "GPU Clock";
const char *GpuUsageString = "GPU Core Load";
int GpuTemperatureIteratorValue, GpuClockIteratorValue, GpuUsageIteratorValue = -1;


auto evgaGif = { EVGA_0, EVGA_1, EVGA_2, EVGA_3, EVGA_4, EVGA_5, EVGA_6, EVGA_7 };
// auto knacklesGif = {knackles001, knackles002, knackles003, knackles004, knackles005, knackles006, knackles007, knackles008};

// Update Status every 1.5 seconds
MillisTimer statusTimer = MillisTimer(1500);
// Update Status every 3 seconds
MillisTimer gifTimer = MillisTimer(3000);

bool foundSensorData = false;
int sensorValueArray[2];

TFT_eSPI tft = TFT_eSPI(SCREEN_HEIGHT, SCREEN_WIDTH);
HTTPClient http;

const size_t capacity = JSON_ARRAY_SIZE(221) + 221 * JSON_OBJECT_SIZE(6) + 18290;
DynamicJsonDocument doc(capacity);

////////////////////////////////////////////////////////  Function Declerations  //////////////////////////////////////////////////////// 

void ConnectToWifi();
void DrawEVGA();
void DrawKnuckles();
void UpdateStatusEvent(MillisTimer &mt);
void AnimateGifEvent(MillisTimer &mt);
void GetJsonData();
void SetSensorValueArray(DynamicJsonDocument dynamicJsonDocument);

////////////////////////////////////////////////////////  Setup & Loop  //////////////////////////////////////////////////////// 

void setup()
{

    Serial.begin(115200);

    tft.init();
    tft.setRotation(1);
    tft.setSwapBytes(true);
    tft.fillScreen(TFT_BLACK);

    ConnectToWifi();

    statusTimer.expiredHandler(UpdateStatusEvent);
    statusTimer.start();
    gifTimer.expiredHandler(AnimateGifEvent);
    gifTimer.start();
    Serial.println("Started Handler");
}

void loop()
{
    statusTimer.run();
    gifTimer.run();
    // if (WiFi.status() != WL_CONNECTED)
    // {
    //     ConnectToWifi();
    // }
    // DrawKnuckles();
    // delay(20);
    // DrawKnuckles();
    // DrawEVGA();
    // GetJsonData();
}

////////////////////////////////////////////////////////  Functions Implementations //////////////////////////////////////////////////////// 

void ConnectToWifi()
{
    String connecting = "Connecting to Wifi";
    if ((WiFi.status() != WL_CONNECTED))
    {
        WiFi.begin(WIFI_SSID, WIFI_PASSWD);
        while (WiFi.status() != WL_CONNECTED)
        {
            DrawEVGA();
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
        SENSOR_DATA sd = {
            dynamicJsonDocument["hwinfo"]["readings"][i]["labelUser"],
            dynamicJsonDocument["hwinfo"]["readings"][i]["value"],
            dynamicJsonDocument["hwinfo"]["readings"][i]["unit"],
        };
        sensorsVector.push_back(sd);
        Serial.println(sd.label);
    }

    // If all values have been set
    if (sensorsVector.size() == NumberOfEntries)
    {
        foundSensorData = true;
        Serial.println("FOUND ALL SENSOR DATA FOUND");
    }
}

void UpdateStatusEvent(MillisTimer &mt) {
    GetJsonData();
}

void AnimateGifEvent(MillisTimer &mt) {
    DrawEVGA();
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

        tft.setFreeFont(&GothamBook9pt7b);
        tft.setTextColor(TFT_WHITE, TFT_BLACK);
        int padding = tft.textWidth(String("GPU Temp"), GFXFF); // get the width of the text in pixels
        tft.setTextPadding(padding);

        size_t sizeOfJsonDoc = doc["hwinfo"]["readings"].size();

        for (int i = 0 ; i < sizeOfJsonDoc ; i++ ) {

            SENSOR_DATA sd = {
                doc["hwinfo"]["readings"][i]["labelUser"],
                doc["hwinfo"]["readings"][i]["value"],
                doc["hwinfo"]["readings"][i]["unit"],
            };
            
            String label = sd.label;
            String valueWithUnit = sd.value + " " + sd.unit;

            switch(i) {
                case 0:
                    tft.drawString(label, 0, 5);
                    tft.drawString(valueWithUnit, 0, 25);
                    break;
                case 1:
                    tft.drawString(label, 140, 5);
                    tft.drawString(valueWithUnit, 140, 25);
                    break;
                case 2:
                    tft.drawString(label, 0, 45);
                    tft.drawString(valueWithUnit, 0, 65);
                    break;
                case 3:
                    tft.drawString(label, 140, 45);
                    tft.drawString(valueWithUnit, 140, 65);
                    break;
            }

        }
    }
    else
    {
        Serial.println("Bad Error Code: " + String(httpCode));
    }
}

void DrawEVGA()
{
    for (auto it = begin(evgaGif); it != end(evgaGif); ++it)
    {
        tft.pushImage(0, SCREEN_HEIGHT - 52, 229, 52, *it);
        delay(50);
    }
}

// void DrawKnuckles()
// {
//     for (auto it = begin(knacklesGif); it != end(knacklesGif); ++it)
//     {
//         tft.pushImage(0, 0, 135, 135, *it);
//         delay(20);
//     }
// }