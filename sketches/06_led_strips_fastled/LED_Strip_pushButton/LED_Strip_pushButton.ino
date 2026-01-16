#include <FastLED.h>

// all defines for LEDs 
#define LED_PIN     6
#define NUM_LEDS    61
// RGB colours 
#define RED     CRGB(255, 0, 0)
#define BLUE CRGB(0, 0, 255)
const byte pushButtonPin = 3; // Define the pin for the push button
CRGB leds[NUM_LEDS]; // array declaration 

void setup() {
  // put your setup code here, to run once:
  pinMode(pushButtonPin, INPUT_PULLUP); // Enable internal pull-up resistor for push button
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Check if push button is pressed
  if (digitalRead(pushButtonPin) == HIGH) {
    setColour(BLUE);
  } else {
    setColour(RED);
  }
}

void setColour(CRGB colour) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = colour;
  }
  FastLED.show();
  delay(500);
}

