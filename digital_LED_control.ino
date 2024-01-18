#define PushButton 2
#define LED 3

int buttonState = 0;  // variable for reading the pushbutton status


void setup() {
  // initialize the LED pin as an output:
  //pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  Serial.begin(9600);
  pinMode(PushButton, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(PushButton);
  Serial.println(buttonState); // print the button state in serial monitor
  // Check if the button is pressed and turn LED on if it is 
  if  (buttonState == HIGH) {
    digitalWrite(LED, HIGH);

  }else {
    digitalWrite(LED, LOW);
  }
}
