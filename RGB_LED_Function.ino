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
  setColour(255, 0, 0);
  delay(1000);
  setColour(0,255,0);
  delay(1000);
  setColour(0,0,255);
  delay(1000);
}

void setColour(int RED, int GREEN, int BLUE){
  analogWrite(PIN_RED,   RED);
  analogWrite(PIN_GREEN, GREEN);
  analogWrite(PIN_BLUE,  BLUE);
}