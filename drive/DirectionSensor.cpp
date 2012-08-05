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

int leftSignal[100];
int rightSignal[100];

DirectionSensor::DirectionSensor(PinMapper leftSensorPin, PinMapper rightSensorPin) {
}

DirectionSensor::~DirectionSensor() {
}

void DirectionSensor::update() {
    leftSoundSensor.read();
    rightSoundSensor.read();
}

int DirectionSensor::read() {
    
}





