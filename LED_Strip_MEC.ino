#include <FastLED.h>

// all defines for LEDs 
#define LED_PIN     6
#define NUM_LEDS    61

// RGB colours 
#define RED     CRGB(255, 0, 0)
#define GREEN   CRGB(0, 255, 0)
#define ORANGE   CRGB(229,83,0)
#define BLUE CRGB(0, 0, 255)

CRGB leds[NUM_LEDS]; // array declaration 

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {
 
  setColour(RED);
  setColour(ORANGE);
  setColour(GREEN);
  setColour(BLUE);
}

void setColour(CRGB colour) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = colour;
    delay(40);
    FastLED.show();
  }
 
}