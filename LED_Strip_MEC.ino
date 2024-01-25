// This code utilises "FastLED" library by Daniel Garcia 
// to control the WS2812B LED strip and sequentially 
// set the colurs of the strip to red, orange, green and blue 

//Created by Kacper Sikorski 
// 19/01/2024

// Declare a library 
#include <FastLED.h>

// all defines for LEDs 
// NUM_LEDS specifies the number of LEDs in the strip
#define LED_PIN     6
#define NUM_LEDS    61  // update with the number in your strip

// RGB colours 
// Colours are defined in a similar way as in the RGB LED activity 
// CRGB is a custom data type used to represent RGB colour values 
// in the FastLED library. It stands for Color-Red-Green-Blue.

#define RED     CRGB(255, 0, 0)
#define GREEN   CRGB(0, 255, 0)
#define ORANGE   CRGB(229,83,0)
#define BLUE CRGB(0, 0, 255)


//declare an array of CRGB elements to represent 
//the state of each LED in the strip
CRGB leds[NUM_LEDS]; // array declaration 

void setup() {
  // initialize FastLED library to communicate with the WS2812 LEDs
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {
 // Call a setColour function and pass an CRGB value that represents the colour 
  setColour(RED);
  setColour(ORANGE);
  setColour(GREEN);
  setColour(BLUE);
}
// create a setColour function that will set the colour of LEDs each time it is called 
void setColour(CRGB colour) {
  // setColour takes CRGB type value named colour and sets colour of each LED 
  // to a passed colour argument in the for loop 
  // no return value 
  for (int i = 0; i < NUM_LEDS; i++) {
    // iterate through the number of LEDs, i++ increments the value of integer i by one
    // i<NUM_LEDS is a conditional statement that compares whether i is less 
    // than the number of LEDs declared earlier in the code 

    // set a colour stored in the passed CRGB type colour value
    leds[i] = colour;
    // wait 40 miliseconds 
    delay(40);
    // a pre-written function in FastLED library that updates the physical LEDs 
    // with the current colours stored in the LED array whenever it is called
    FastLED.show();
  }
 
}