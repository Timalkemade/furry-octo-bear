#include "number8Bit.h"

const int sensorPin = A0;

int pins[8];
int sensorMin = 2147483647;
int sensorMax = 0;

unsigned long previousMillis = 0;        // will store last time LED was updated

unsigned int interval = 200;           // interval at which to write
unsigned long lastWrite = 0;
unsigned long totalSensorValue = 0;
unsigned long nrReads = 0;

void setup() {
   
  // initialize the pins  
  int i;
  for(i=0; i<8; i++) {
    pins[i] = i+2;  
    pinMode(pins[i], OUTPUT);
  }
  
  // calibrate sensor
  printNumber(8,pins);
  
  while (millis() < 5000) {
    int sensorValue = analogRead(sensorPin);

    // record the maximum sensor value
    if (sensorValue > sensorMax) {
      sensorMax = sensorValue;
    }
    
    // record the minimum sensor value
    if (sensorValue < sensorMin) {
      sensorMin = sensorValue;
    } 
  }
}

void loop() {
  // read from the sensor
  int sensorValue = analogRead(sensorPin);
  
  totalSensorValue += sensorValue;
  nrReads++;
  
  // if enough time has past update the timer
  unsigned long currentMillis = millis();
  if(currentMillis - lastWrite > interval) {
    
    // average the values
    long avgValue = totalSensorValue / nrReads;
  
    // map the average value to the range 1-10
    avgValue = map(avgValue, sensorMax, sensorMin, 0, 10);
    avgValue = constrain(avgValue, 0, 9);
    
    // print the number 
    printNumber(avgValue, pins);
    
    // update the timing and reset the sensor values
    lastWrite = currentMillis;
    totalSensorValue = 0;
    nrReads = 0;

  }
}
