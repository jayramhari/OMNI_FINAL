
#include <Suli.h>
#include <Wire.h>
#include "Seeed_LED_Bar_Arduino.h"

SeeedLedBar bar(3, 2);                  // CLK, DTA

void setup()
{
    pinMode(7,INPUT);
    bar.begin(3, 2);
}

void loop()
{
  int state = digitalRead(7);
  if(state == 1){
    bar.singleLed(5,HIGH);
    bar.singleLed(0,LOW);
  }
  else{
    bar.singleLed(5,LOW);
    bar.singleLed(0,HIGH);
  }
    
    delay(100);
}
