/* ID 17016 */

#include <Servo.h>

//setup servo
Servo myservo;
//setup pins for button and servo
const byte BUTTON = A0;
const byte SERVOPIN = 11;
//setup servo position
int pos = 0;

void setup() {
  pinMode(BUTTON, INPUT);
  myservo.attach(SERVOPIN);
}

//when button is pressed, servo seeps back and forth 
void loop() {
  //checks to see if button = high
  if (digitalRead(BUTTON), HIGH) {
    //moves from 0 - 180 on the servo
    for (pos = 0; pos <= 180; pos += 1) {
      myservo.write(pos);
      delay(15);
    }
 //moves from 180 - 0 on the servo
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(15);
  }
}
