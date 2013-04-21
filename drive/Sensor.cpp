/* 
 * File:   DistanceSensor.cpp
 * Author: Tim
 * 
 * Created on July 28, 2012, 4:46 PM
 */

#include "Sensor.h"

Pin pin;

Sensor::Sensor(Pin aPin) {
    pin = aPin;
}

Sensor::~Sensor() {
}

int Sensor::read() {
    return analogRead(pin);
}
