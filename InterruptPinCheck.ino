int pin = 11; //replace with the pin number

void setup() {
  Serial.begin(9600);
  int checkPin = digitalPinToInterrupt(pin);

  if (checkPin == -1) {
    Serial.println("Not a valid interrupt pin!");
  } else {
    Serial.println("Valid interrupt pin.");
  }
}

void loop() {
}