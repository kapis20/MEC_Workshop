#define BUZZER_PIN 9  // Replace with the actual pin you have connected the buzzer to

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Turn on the buzzer
  digitalWrite(BUZZER_PIN, HIGH);
  delay(1000);

  // Turn off the buzzer
  digitalWrite(BUZZER_PIN, LOW);
  delay(1000);
}