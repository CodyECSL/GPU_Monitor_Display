#include <Arduino.h>
#include <ArduinoJson.h> //https://arduinojson.org/v6/assistant/
#include <Free_Fonts.h>
#include <MillisTimer.h>
#include <SPI.h>
#include <TFT_eSPI.h>
#include <Wire.h>
#include <config.h>
#include <map>
#include <vector>
#include <Fonts/GothamBook_9.h>
#include <Gifs/EvgaMainGif.h>
#include <Gifs/EvgaIntro.h>
#include <Gifs/NvidiaRtx.h>


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

auto evgaMainGif = { EvgaMainGif_0, EvgaMainGif_1, EvgaMainGif_2, EvgaMainGif_3, EvgaMainGif_4, EvgaMainGif_5, EvgaMainGif_6, EvgaMainGif_7, EvgaMainGif_8, EvgaMainGif_9, EvgaMainGif_10, EvgaMainGif_11, EvgaMainGif_12, EvgaMainGif_13, EvgaMainGif_14, EvgaMainGif_15 };
auto evgaIntroGif = { EvgaIntro_0, EvgaIntro_1, EvgaIntro_2, EvgaIntro_3, EvgaIntro_4, EvgaIntro_5, EvgaIntro_6, EvgaIntro_7, EvgaIntro_8, EvgaIntro_9, EvgaIntro_10, EvgaIntro_11, EvgaIntro_12, EvgaIntro_13, EvgaIntro_14, EvgaIntro_15, EvgaIntro_16, EvgaIntro_17, EvgaIntro_18, EvgaIntro_19, EvgaIntro_20, EvgaIntro_21, EvgaIntro_22 };
auto nvidiaGif = { NvidiaRtx_0, NvidiaRtx_1, NvidiaRtx_2, NvidiaRtx_3, NvidiaRtx_4, NvidiaRtx_5, NvidiaRtx_6, NvidiaRtx_7, NvidiaRtx_8, NvidiaRtx_9, NvidiaRtx_10, NvidiaRtx_11, NvidiaRtx_12, NvidiaRtx_13 };

// Update Status every 1 second
MillisTimer statusTimer = MillisTimer(1000);
// Update Status every 2.5 seconds
MillisTimer gifTimer = MillisTimer(2500);

TaskHandle_t ReadSerialTask;

TFT_eSPI tft = TFT_eSPI(SCREEN_HEIGHT, SCREEN_WIDTH);

const size_t capacity = JSON_ARRAY_SIZE(221) + 221 * JSON_OBJECT_SIZE(6) + 18290;
DynamicJsonDocument doc(capacity);
DynamicJsonDocument docCopy(capacity);
bool firstIteration = true;
bool confirmedSerialConnection = false;

////////////////////////////////////////////////////////  Function Declerations  //////////////////////////////////////////////////////// 

void SetTextDisplayDefaults();
void DrawIntroLoop();
void DrawEVGA();
void DrawEVGAIntro();
void DrawNvidia();
void DrawDisplayEvent(MillisTimer &mt);
void AnimateGifEvent(MillisTimer &mt);
void ReadSerial(void * parameter);
void DrawJsonDataToDisplay();
void CreateAsyncSerialTask();

////////////////////////////////////////////////////////  Setup & Loop  //////////////////////////////////////////////////////// 

void setup()
{

    Serial.end();
    Serial.begin(256000);

    SetTextDisplayDefaults();

    DrawIntroLoop();

    CreateAsyncSerialTask();    

    while (!confirmedSerialConnection)
    {
        // Chill out here until we have a verified Serial Connection with the app
        DrawIntroLoop();
    }
    
    tft.fillScreen(TFT_BLACK);
    DrawEVGA();
    statusTimer.expiredHandler(DrawDisplayEvent);
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
    tft.setTextDatum(TL_DATUM);
}

void CreateAsyncSerialTask()
{
    // Set data fetching on Core 0 which leaves UI updates on Core 1
    xTaskCreatePinnedToCore(
      ReadSerial, /* Function to implement the task */
      "ReadSerialTaskOnCore0", /* Name of the task */
      10000,  /* Stack size in words */
      NULL,  /* Task input parameter */
      0,  /* Priority of the task */
      &ReadSerialTask,  /* Task handle. */
      0); /* Core where the task should run */
}

void DrawDisplayEvent(MillisTimer &mt) {
    DrawJsonDataToDisplay();
}

void AnimateGifEvent(MillisTimer &mt) {
    DrawEVGA();
}

void ReadSerial(void * parameter)
{
    while (true)
    {
        if (Serial.available() > 0)
        {
            String serialData = Serial.readStringUntil('\n');
            DeserializationError deserializationError = deserializeJson(doc, serialData);
            if (deserializationError)
            {
                // Serial.println("deserialization failed");
                // Serial.println(serialData);
                // return;
            }
            else
            {
                // Create a copy of the doc object so there is no contention of the same
                // object between cores
                confirmedSerialConnection = true;
                docCopy = doc;
                Serial.println(serialData);
            }
                   
        }
        
        // vTaskDelay(250);
    }
    
}

void DrawJsonDataToDisplay () 
{
    size_t sizeOfJsonDoc = docCopy["r"].size();

    for (int i = 0 ; i < sizeOfJsonDoc ; i++ ) {
        
        sensorDataDummyStruct = {
            docCopy["r"][i]["a"],
            docCopy["r"][i]["c"],
            docCopy["r"][i]["b"],
        };
        
        String label = sensorDataDummyStruct.label;
        String valueWithUnit =  String(sensorDataDummyStruct.value.toInt()) + " " + sensorDataDummyStruct.unit;
        tft.setTextPadding(tft.textWidth(valueWithUnit) + 30);

        switch(i) {
            case 0:
                if (firstIteration)
                {
                    tft.drawString(label, 1, 5);
                }
                tft.drawString(valueWithUnit, 1, 25);
                break;
            case 1:
                if (firstIteration)
                {
                    tft.drawString(label, 140, 5);                    
                }
                tft.drawString(valueWithUnit, 140, 25);
                break;
            case 2:
                if (firstIteration)
                {
                    tft.drawString(label, 1, 45);    
                }
                tft.drawString(valueWithUnit, 1, 65);
                break;
            case 3:
                if (firstIteration)
                {
                    tft.drawString(label, 140, 45);
                }
                tft.drawString(valueWithUnit, 140, 65);
                break;
        }

        // This delay is here as you're fighting with the
        // display's refresh rate and refershing text too
        // quickly causes flickering on the screen. 
        // Delay time was increased until a majority of 
        // flickering was no longer observed.
        if (!firstIteration)
        {
            delay(350);
        }
    }

    if (firstIteration && sizeOfJsonDoc > 0)
    {
        Serial.println("Finished first iteration");
        firstIteration = false;
    } 
}

void DrawIntroLoop()
{
    tft.fillScreen(TFT_BLACK);
    DrawEVGAIntro();
    tft.fillScreen(TFT_BLACK);
    DrawNvidia();
}

void DrawEVGA()
{
    for (auto it = begin(evgaMainGif); it != end(evgaMainGif); ++it)
    {
        tft.pushImage(0, SCREEN_HEIGHT - 53, 240, 53, *it);
        delay(50);
    }
}

void DrawEVGAIntro()
{
    int gifHeight = 113;
    int gifWidth = 200;
    for (auto it = begin(evgaIntroGif); it != end(evgaIntroGif); ++it)
    {
        tft.pushImage( ((SCREEN_WIDTH - gifWidth) / 2), ((SCREEN_HEIGHT - gifHeight) / 2), gifWidth, gifHeight, *it);
        delay(75);
    }
    delay(1000);
}

void DrawNvidia()
{
    int counter = 0;
    int gifHeight = 63;
    int gifWidth = 190;
    for (auto it = begin(nvidiaGif); it != end(nvidiaGif); ++it)
    {
        tft.pushImage( ((SCREEN_WIDTH - gifWidth) / 2), ((SCREEN_HEIGHT - gifHeight) / 2), gifWidth, gifHeight, *it);
        if (counter < 6)
        {
            delay(100);
        }
        else
        {
            delay(20);
        }
        if (counter == 6)
        {
            delay(1000);
        }
        if (counter == 13)
        {
            delay(2000);
        }
        counter++;
    }
}