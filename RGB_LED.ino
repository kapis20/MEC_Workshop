// This code defines three pins, namely PIN_RED, PIN_BLUE, and PIN_GREEN, 
// which correspond to the digital pins 10, 9, and 6, respectively.
// These pins are set up as output pins in the setup() function. 
// In the loop() function, a sequence is repeatedly run to create different
// olours using analogWrite for PWM (Pulse Width Modulation)
// on each pin to control the intensity of the respective colour channels, i.e., red, green, and blue.
// it allows running a pttern of various colours 

//Red: (255, 0, 0)
//Green: (0, 255, 0)
//Blue: (0, 0, 255)
//Yellow: (255, 255, 0)
//Magenta: (255, 0, 255)
//Cyan: (0, 255, 255)


// created by Kacper Sikorski 
// 10/01/2024

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
// colour R = 135, G = 215, B = 215 - DarkSlateGray3	#87d7d7
  analogWrite(PIN_RED,   255);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE,  0);

  delay(1000); // keep the color 1 second

  // colour	Red3	#d70000	rgb(215,0,0
  analogWrite(PIN_RED,   0);
  analogWrite(PIN_GREEN, 255);
  analogWrite(PIN_BLUE,  0);

  delay(1000); // keep the color 1 second

  // output blue for 1 second  Blue: (0, 0, 255)
  analogWrite(PIN_RED,   0);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE,  255);

  delay(1000);
// colour code Yellow1	#ffff00	rgb(255,255,0)
  analogWrite(PIN_RED,   255);
  analogWrite(PIN_GREEN, 255);
  analogWrite(PIN_BLUE,  0);

  delay(1000); // keep the color 1 second
}