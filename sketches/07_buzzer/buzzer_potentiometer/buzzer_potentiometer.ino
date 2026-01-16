#define buzzerPin 9      // Connect the buzzer to digital pin 9
#define potentiometerPin A0  // Connect the potentiometer to analog pin A0

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

/* Map an analog value to 8 bits (0 to 255) */

void loop() {
  int potValue = analogRead(potentiometerPin);
  potValue = map(potValue, 0, 1023, 0, 255); // map analog range 1-1023 of a buzzer to a 0-255
  analogWrite(buzzerPin, potValue); // change the potentiometer value to affect the PWM
}