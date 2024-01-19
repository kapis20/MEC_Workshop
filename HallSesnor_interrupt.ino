const byte hallSensorPin = 2; 
volatile bool magnetDetected = false; 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(hallSensorPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(hallSensorPin), magnetInterrupt, FALLING);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (magnetDetected) {
    Serial.println("Magnet detected!");
    magnetDetected = false;  // Reset the flag
  }
}


// Interrupt service routine for the Hall effect sensor
void magnetInterrupt() {
  magnetDetected = true;
}
