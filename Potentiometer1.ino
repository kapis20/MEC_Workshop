// Demonstrates analog input by reading an analog sensor on analog pin 0 and
// turning on and off a light-emitting diode(LED) connected to digital pin 13.
// The amount of time the LED will be on and off depends on the value obtained
// by analogRead().

//  The circuit:
//   - potentiometer center pin of the potentiometer to the analog input 0
//     one side pin (either one) to ground
//     the other side pin to +5V
//   - LED anode (long leg) attached to digital output 13 through 220 ohm resistor cathode (short leg) attached to ground
//   - Note: because most Arduinos have a built-in LED attached to pin 13 on the board


// created by Kacper Sikorski 
// 24/01/2024


//pre-processor directive used to define constants or macros
//In this case, it's defining symbolic names for the pin numbers
#define LED_PIN 13 // define pin 13 for LED output
#define POTENTIOMETER_PIN A0 // define analog 0 pin for the sensor input

void setup()
{
 
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);
  digitalWrite(LED_PIN, HIGH); 
  // turn the led on
  delay(potentiometerValue); 
  // pause the code execution for <potentiometerValue> miliseconds 
  digitalWrite(LED_PIN, LOW); 
  //turn the led off
  delay(potentiometerValue);
  // pause the code execution for <potentiometerValue> miliseconds 
}