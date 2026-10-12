const int ledPinA = 8; //sets LED #1 to pin 8
const int ledPinB = 9; //sets LED #2 to pin 9
const int ledPinC = 10; //sets LED #3 to pin 10

void setup() {
  pinMode(ledPinA, OUTPUT); //sets LED #1 to output
  pinMode(ledPinB, OUTPUT); //sets LED #2 to output
  pinMode(ledPinC, OUTPUT); //sets LED #3 to output
}

void loop() {
  digitalWrite(ledPinA, LOW); //turns LED #1 off
  digitalWrite(ledPinB, LOW); //turns LED #2 off
  digitalWrite(ledPinC, LOW); //turns LED #3 off
  
  digitalWrite(ledPinC, HIGH); //turns LED #3 on
  delay(500);                  //waits 0.5 seconds
  digitalWrite(ledPinC, LOW);  //turns LED #3 off
  delay(500);                  //waits 0.5 seconds

  digitalWrite(ledPinB, HIGH); //turns LED #2 on
  delay(500);                  //waits 0.5 seconds
  digitalWrite(ledPinB, LOW);  //turns LED #2 off
  delay(500);                  //waits 0.5 seconds

  digitalWrite(ledPinA, HIGH); //turns LED #1 on
  delay(500);                  //waits 0.5 seconds
  digitalWrite(ledPinA, LOW);  //turns LED #1 off
  delay(500);                  //waits 0.5 seconds
  
}
