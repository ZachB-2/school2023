#include <Wire.h>
#include <SparkFun_Qwiic_OpenLog_Arduino_Library.h>
OpenLog myLog;  //Create instance

void setup() {
  Wire.begin();   //Initialize I2C
  myLog.begin();  //Open connection to OpenLog (no pun intended)

  Serial.begin(9600);  //9600bps is used for debug statements
                       //Serial.println("OpenLog Write File Test");

  myLog.create("myExampleFile.txt");
  //Record something to the default log
  myLog.println("This goes to the log file");

  myLog.syncFile();

  Serial.println(F("Done!"));
}

void loop() {
}
