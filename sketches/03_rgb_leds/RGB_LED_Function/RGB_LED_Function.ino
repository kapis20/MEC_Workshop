//This code utilises function to robustly 
// control RGB LED 

// In Arduino programming, functions are blocks of reusable code that perform a specific task. 
// Functions help organize code, make it more modular, and enhance readability.



// created by Kacper Sikorski 
// 19/01/2024

#define PIN_RED 10
#define PIN_BLUE 9
#define PIN_GREEN 6

void setup() {
  // put your setup code here, to run once:

  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Pass integer values representing RGB colours to function setColour
  setColour(255, 0, 0);
  delay(1000);
  //Pass integer values representing RGB colours to function setColour
  setColour(0,255,0);
  delay(1000);
  //Pass integer values representing RGB colours to function setColour
  setColour(0,0,255);
  delay(1000);
}
// Function declaration:
// return_type function_name(parameter_type parameter_name) {
//   // Function body - code to be executed
//   // ...
//   return value; // Optional return statement with a value
// }

void setColour(int RED, int GREEN, int BLUE){
  //This function takes three integer values representing RGB values
  //which are passed to analogWrite() to control the RGB LED
  //No value is returned, therefore void keyword is used 
  analogWrite(PIN_RED,   RED);
  analogWrite(PIN_GREEN, GREEN);
  analogWrite(PIN_BLUE,  BLUE);
}