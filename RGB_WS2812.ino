#include <FastLED.h>

#define LED_PIN     3
#define NUM_LEDS    1
const int BZ = 5;

CRGB leds[NUM_LEDS];

void setup() 
        {
        FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);        
        pinMode(BZ,OUTPUT);
        Serial.begin(115200);
        }

void loop() 
        {          
        digitalWrite(BZ,LOW); 
        leds[0] = CRGB(20, 0, 118);
        FastLED.show();
        delay(1000);   
        leds[0] = CRGB(255, 0, 0); /// red
        FastLED.show();
        delay(1000);  
        leds[0] = CRGB(0, 255, 0);///green
        FastLED.show();
        delay(1000);  
        leds[0] = CRGB(0, 0, 255);///blue
        FastLED.show();
        delay(1000);  
        leds[0] = CRGB(150, 0, 255);//purple
        FastLED.show();
        delay(500);
        leds[0] = CRGB(255, 200, 20);///orange
        FastLED.show();
        delay(1000);  
        leds[0] = CRGB(85, 60, 180);///light blue
        FastLED.show();
        delay(1000);  
        leds[0] = CRGB(50, 255, 20);///light green
        FastLED.show();
        delay(1000);  
        }
