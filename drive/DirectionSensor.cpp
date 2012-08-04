/* 
 * File:   DirectionSensor.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 12:55
 */

#include "DirectionSensor.h"
#include "PinMapper.h"
#include "Sensor.h"

Sensor leftSoundSensor;
Sensor rightSoundSensor;

int leftSignal[] = int[100];
int rightSignal[] = int[100];

DirectionSensor::DirectionSensor(PinMapper leftSensor, PinMapper rightSensor) {
    leftSoundSensor = Sensor(leftSensor);
    rightSoundSensor = Sensor(rightSensor);
}

DirectionSensor::~DirectionSensor() {
}

DirectionSensor::update() {
    leftSoundSensor.read();
    rightSoundSensor.read();
}

DirectionSensor::read() {
    
}





