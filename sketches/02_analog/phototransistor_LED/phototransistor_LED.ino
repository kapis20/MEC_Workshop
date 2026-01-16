#define PR_Pin 2 //declare the pin of the sensor.
#define LED_Pin 3
int PR_read;           // declare the answer of the pin read.

void setup() {
Serial.begin(9600);
pinMode(LED_Pin, OUTPUT);
}

void loop() {

PR_read = digitalRead(PR_Pin); // read the reflection of the photo reflector.
Serial.println(PR_read);   
if (PR_read == 0){
  digitalWrite(LED_Pin, HIGH);
}else{
  digitalWrite(LED_Pin, LOW);
}
    // print the from pin 12.
delay(100);

}
