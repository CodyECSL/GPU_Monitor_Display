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
#include <Fonts/GothamBook_9.h>
#include <EVGA_GIF/EVGA_GIF.h>

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
SENSOR_DATA sensorDataDummyStruct = {};

auto evgaGif = { EVGA_0, EVGA_1, EVGA_2, EVGA_3, EVGA_4, EVGA_5, EVGA_6, EVGA_7 };

// Update Status every 1.5 seconds
MillisTimer statusTimer = MillisTimer(1500);
// Update Status every 3 seconds
MillisTimer gifTimer = MillisTimer(3000);

TFT_eSPI tft = TFT_eSPI(SCREEN_HEIGHT, SCREEN_WIDTH);
HTTPClient http;

const size_t capacity = JSON_ARRAY_SIZE(221) + 221 * JSON_OBJECT_SIZE(6) + 18290;
DynamicJsonDocument doc(capacity);

////////////////////////////////////////////////////////  Function Declerations  //////////////////////////////////////////////////////// 

void SetTextDisplayDefaults();
void ConnectToWifi();
void CheckWifiStatus();
void DrawEVGA();
void UpdateStatusEvent(MillisTimer &mt);
void AnimateGifEvent(MillisTimer &mt);
void GetJsonData();
void DrawJsonDataToDisplay();

////////////////////////////////////////////////////////  Setup & Loop  //////////////////////////////////////////////////////// 

void setup()
{

    Serial.begin(115200);

    SetTextDisplayDefaults();
    ConnectToWifi();

    statusTimer.expiredHandler(UpdateStatusEvent);
    statusTimer.start();
    gifTimer.expiredHandler(AnimateGifEvent);
    gifTimer.start();
}

void loop()
{
    statusTimer.run();
    gifTimer.run();
}

////////////////////////////////////////////////////////  Functions Implementations //////////////////////////////////////////////////////// 

void SetTextDisplayDefaults() 
{
    tft.init();
    tft.setRotation(1);
    tft.setSwapBytes(true);
    tft.fillScreen(TFT_BLACK);
    tft.setFreeFont(&GothamBook9pt7b);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    int padding = tft.textWidth(String("GPU Temperature"), GFXFF); // get the width of the text in pixels
    tft.setTextPadding(padding);
}

void ConnectToWifi()
{
    int counter = 0;
    tft.fillScreen(TFT_BLACK);
    String connecting = "Connecting to Wifi";
    if ((WiFi.status() != WL_CONNECTED))
    {
        WiFi.begin(WIFI_SSID, WIFI_PASSWD);
        while (WiFi.status() != WL_CONNECTED)
        {
            DrawEVGA();
            Serial.println(WiFi.status());
            delay(500);
            tft.drawString(connecting, 10, 0);
            connecting += ".";
            counter++;

            // BUG: Adding in the below software restart as there are instances where
            //      WiFi fails to load due to some kind of race condition.
            // Software Restart the device after 20 attempts
            if (counter > 20) 
            {
                tft.fillScreen(TFT_BLACK);
                tft.drawString("Restarting device in 5 seconds...", 0, 60);
                delay(5000);
                ESP.deepSleep(1);
                ESP.restart();
            }
        }
    }

    Serial.print(F("Connected. My IP address is: "));
    Serial.println(WiFi.localIP());
    tft.fillScreen(TFT_BLACK);
}

void CheckWifiStatus()
{
    Serial.println(WiFi.status());
    if (WiFi.status() != WL_CONNECTED)
    {
        statusTimer.stop();
        gifTimer.stop();
        ConnectToWifi();
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

        DrawJsonDataToDisplay();
    }
    else
    {
        Serial.println("Bad Error Code: " + String(httpCode));
    }
}

void DrawJsonDataToDisplay () 
{
    size_t sizeOfJsonDoc = doc["hwinfo"]["readings"].size();

    for (int i = 0 ; i < sizeOfJsonDoc ; i++ ) {
        
        sensorDataDummyStruct = {
            doc["hwinfo"]["readings"][i]["labelUser"],
            doc["hwinfo"]["readings"][i]["value"],
            doc["hwinfo"]["readings"][i]["unit"],
        };
        
        String label = sensorDataDummyStruct.label;
        String valueWithUnit =  String(sensorDataDummyStruct.value.toInt()) + " " + sensorDataDummyStruct.unit;

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

void DrawEVGA()
{
    for (auto it = begin(evgaGif); it != end(evgaGif); ++it)
    {
        tft.pushImage(0, SCREEN_HEIGHT - 52, 229, 52, *it);
        delay(50);
    }
}