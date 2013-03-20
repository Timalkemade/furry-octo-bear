/* 
 * File:   DistanceSensor.cpp
 * Author: Tim
 * 
 * Created on July 28, 2012, 4:46 PM
 */

#include "Sensor.h"

Pin pinMapper;

Sensor::Sensor(Pin aPinMapper) {
    pinMapper = aPinMapper;
}

Sensor::Sensor() {
}

Sensor::~Sensor() {
}

int Sensor::read() {
    return analogRead(pinMapper);
}
