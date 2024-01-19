#include <FastLED.h>

// all defines for LEDs 
#define LED_PIN     6
#define NUM_LEDS    61

// RGB colours 
#define RED     CRGB(255, 0, 0)
#define BLUE CRGB(0, 0, 255)

const byte hallSensorPin = 2; 
volatile bool magnetDetected = false; 

CRGB leds[NUM_LEDS]; // array declaration 

void setup() {
  // put your setup code here, to run once:

  pinMode(hallSensorPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(hallSensorPin), magnetInterrupt, FALLING);
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 // Your main code can run here if needed

  if (magnetDetected) {
    
    setColour(BLUE);
    magnetDetected = false;  // Reset the flag
  }else{
    setColour(RED);
  }
}


// Interrupt service routine for the Hall effect sensor
void magnetInterrupt() {
  magnetDetected = true;
}

void setColour(CRGB colour) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = colour;
    
  }
  FastLED.show();
  delay(500);
}
