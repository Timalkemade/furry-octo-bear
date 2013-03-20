/* 
 * File:   DistanceSensor.h
 * Author: Tim
 *
 * Created on July 28, 2012, 4:46 PM
 */

#ifndef SENSOR_H
#define	SENSOR_H

#include "Pin.h"
#include <WProgram.h>

class Sensor {
public:
    Sensor(Pin pinMapper);
    Sensor();
    int read();
    virtual ~Sensor();
private:

};

#endif	/* SENSOR_H */

