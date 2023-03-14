//17016
#include <Servo.h>
#include <LibPrintf.h>

const byte SERVOPIN = 5;
const byte CHOICEBTN = 1;
const byte STARTBTN = 2;
const byte LED1 = A0;
const byte LED2 = A1;
const byte LED3 = A2;
const byte LED4 = A3;

Servo lock;
const byte UNLOCK = 180;
const byte LOCK = 0;
const byte KEY = 3;

byte ledChoice = 0;
bool gameOn = false;

void setup() {
  pinMode(CHOICEBTN, INPUT);
  pinMode(STARTBTN, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  lock.attatch(SERVOPIN);
  lock.write(LOCK);

  Serial.begin(9600);
}

void loop() {
  if (digitalRead(STARTBTN) == HIGH) {
    gameOn = !gameOn;
    printf("Game is set to %b", gameOn);
    delay(250);
  }

  if (gameOn) {
    blink(400);
    if (ledChoice == KEY) && digitalRead(CHOICEBTN) == HIGH) {
        lock.write(UNLOCK);
      }

    void blink(int length) {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);

      switch (ledChoice) {
case 0;
 digitalWrite(LED1, LOW);
 break;

  }
delay(length);

}