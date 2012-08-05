/* 
 * File:   DirectionSensor.h
 * Author: Tim
 *
 * Created on 4 augustus 2012, 12:55
 */

#ifndef DIRECTIONSENSOR_H
#define	DIRECTIONSENSOR_H

#include "PinMapper.h"


class DirectionSensor {
public:
    DirectionSensor(PinMapper leftSensorPin, PinMapper rightSensorPin);
    ~DirectionSensor();
    
    void update();
    int read();
private:

};

#endif	/* DIRECTIONSENSOR_H */

