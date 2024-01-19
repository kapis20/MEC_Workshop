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

  // colour code Yellow1	#ffff00	rgb(255,255,0)
  analogWrite(PIN_RED,   0);
  analogWrite(PIN_GREEN, 0);
  analogWrite(PIN_BLUE,  255);

  delay(1000);

  analogWrite(PIN_RED,   255);
  analogWrite(PIN_GREEN, 255);
  analogWrite(PIN_BLUE,  0);

  delay(1000); // keep the color 1 second
}
