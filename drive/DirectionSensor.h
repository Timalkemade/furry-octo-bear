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
    DirectionSensor(Pin leftSoundSensor, Pin rightSoundSensor, int pCompareLength);
    ~DirectionSensor();

    void update();
    int read();
    int minimizeCrossComparison(WrappingArray& left, WrappingArray& right);

private:
    Sensor leftSoundSensor;
    Sensor rightSoundSensor;

    WrappingArray leftSignal;
    WrappingArray rightSignal;
    CrossCorrelation cross;
    int compareLength;
    int correlation[100];

    struct tuple {

        tuple(int pIndex, int pValue) {
            index = pIndex;
            value = pValue;
        }

        int index;
        int value;
    };

    tuple minElement(int elements[], int size);
    tuple crossCompare(WrappingArray& firstSignal, WrappingArray& secondSignal);
};

#endif	/* DIRECTIONSENSOR_H */

