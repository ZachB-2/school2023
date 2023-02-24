//ID 17016

const byte BTNPIN = A0;
int counter = 0;

void setup() {

  pinMode(BTNPIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  //if statement

  if (digitalRead(BTNPIN) == HIGH) {

    //update the counter
    counter++;

    switch (counter) {
      case 1:
        Serial.println("1");
        break;
      case 2:
        Serial.println("2");
        break;
      case 3:
        Serial.println("3");
        break;
      default:
        break;
    }

    Serial.println(counter);
  }



  //delay 250ms to debounce
  delay(250);
}
