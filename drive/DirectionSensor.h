/* 
 * File:   DirectionSensor.h
 * Author: Tim
 *
 * Created on 4 augustus 2012, 12:55
 */

#ifndef DIRECTIONSENSOR_H
#define	DIRECTIONSENSOR_H

#include "Pin.h"
#include "WrappingArray.hpp"
#include "Sensor.h"
#include "CrossCorrelation.h"

class DirectionSensor {
public:
    DirectionSensor(Pin leftSoundSensor, Pin rightSoundSensor, unsigned short pCompareLength, unsigned short pMaxSize);
    ~DirectionSensor();

    void update();
    void update(unsigned short leftValue, unsigned short rightValue);
    float read();
    float minimizeCrossComparison(WrappingArray& left, WrappingArray& right);

private:
    Sensor leftSoundSensor;
    Sensor rightSoundSensor;
    unsigned short maxSize;

    WrappingArray leftSignal;
    WrappingArray rightSignal;
    CrossCorrelation cross;
    unsigned int compareLength;

    struct tuple {

        tuple(unsigned int pIndex, unsigned int pValue) {
            index = pIndex;
            value = pValue;
        }

        unsigned int index;
        unsigned int value;
    };

    tuple minElement(unsigned short elements[], unsigned int size);
    tuple crossCompare(WrappingArray& firstSignal, WrappingArray& secondSignal);
    double timeDifferenceToAngle(double timeDifference);
};

#endif	/* DIRECTIONSENSOR_H */

