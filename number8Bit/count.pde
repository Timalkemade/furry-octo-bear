#include "number8Bit.h"

long previousMillis = 0;        // will store last time LED was updated

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 1000;           // interval at which to blink (milliseconds)
int start = 0;

int pins[8];

void setup() {
  int i;
  for(i=0; i<8; i++) {
    pins[i] = i+2;  
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   
    printNumber(start, pins);
    if (start==9)
        start=0;
      else
        start++;
  }
}
