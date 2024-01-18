#define LED_PIN 2
#define POTENTIOMETER_PIN A0

void setup()
{
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);
  Serial.println("Value before conversion is:");
  Serial.println(potentiometerValue);
  delay(500);
  int brightness = map(potentiometerValue, 0, 1023, 0, 255);
  Serial.println("After conversion: ");
  Serial.println(brightness);
  delay(500);
  analogWrite(LED_PIN, brightness);
}