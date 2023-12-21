#include <FastLED.h>

// all defines for LEDs 
#define LED_PIN     7
#define NUM_LEDS    144

// RGB colours 
#define RED     CRGB(255, 0, 0)
#define GREEN   CRGB(0, 255, 0)
#define ORANGE   CRGB(255,165,0)
#define NOCOLOUR CRGB(0, 0, 0) 
#define BLUE CRGB(0, 0, 255)

CRGB leds[NUM_LEDS]; // array declaration 

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  setColor(BLUE);
  delay(3000);
  setColor(NOCOLOUR);
  delay(3000);
}

void loop() {
 
  setColor(RED);
  delay(1000);

  setColor(ORANGE);
  delay(1000);

  setColor(GREEN);
  delay(1000);

  setColor(BLUE);
  delay(1000);
}

void setColor(CRGB color) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = color;
  }
  FastLED.show();
}