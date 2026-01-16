#define PR_Pin 2 //declare the pin of the sensor.
int PR_read;           // declare the answer of the pin read.

void setup() {
Serial.begin(9600);
}

void loop() {

PR_read = digitalRead(PR_Pin); // read the reflection of the photo reflector.
Serial.println(PR_read);       // print the from pin 12.
delay(100);

}
