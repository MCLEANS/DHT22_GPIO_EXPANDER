#include "PCF8574.h"

//provide expander i2c address as constructor parameter
PCF8574 pcf8574();

void setup() {
  Serial.begin(9600);
  //set expander P0 to output
  pcf8574.pinMode(P0,OUTPUT);
  //set i2c connection
  pcf8574.begin();

}

void loop() {
  //set P0 to HIGH state
  pcf8574.digitalWrite(P0,HIGH);
  delay(1000);
  //set P0 to LOW state
  pcf8574.digitalWrite(P0,LOW);
  

}
