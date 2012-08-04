/* 
 * File:   DistanceSensor.h
 * Author: Tim
 *
 * Created on July 28, 2012, 4:46 PM
 */

#ifndef SENSOR_H
#define	SENSOR_H

#include "PinMapper.h"
#include <WProgram.h>

class Sensor {
public:
    Sensor(PinMapper pinMapper);
    int read();
    virtual ~Sensor();
private:

};

#endif	/* SENSOR_H */

