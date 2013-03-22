/* 
 * File:   DirectionSensor.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 12:55
 */

#include "DirectionSensor.h"
#include <math.h>

DirectionSensor::DirectionSensor(Pin pLeftSensorPin, Pin pRightSensorPin, unsigned short pCompareLength, unsigned short pMaxSize) : leftSignal(pMaxSize), rightSignal(pMaxSize) {
    maxSize = pMaxSize;
    compareLength = pCompareLength;
}

DirectionSensor::~DirectionSensor() {
}

void DirectionSensor::update() {
    leftSignal.writeNext(leftSoundSensor.read());
    rightSignal.writeNext(rightSoundSensor.read());
}

void DirectionSensor::update(unsigned short leftValue, unsigned short rightValue) {
    if (leftValue < 1024) {
        leftSignal.writeNext(leftValue);
    }
    if (rightValue < 1024) {
        rightSignal.writeNext(rightValue);
    }
}

DirectionSensor::tuple DirectionSensor::minElement(unsigned short elements[], unsigned int size) {
    unsigned short minValue = 10000;
    unsigned short minIndex = 0;
    for (unsigned short i = 0; i < size; i++) {
        if (elements[i] <= minValue) {
            minValue = elements[i];
            minIndex = i;
        }
    }
    return tuple(minIndex, minValue);
}

float DirectionSensor::read() {
    return minimizeCrossComparison(rightSignal, leftSignal);
}

float DirectionSensor::minimizeCrossComparison(WrappingArray& right, WrappingArray& left) {

    tuple rightComparison = crossCompare(right, left);
    tuple leftComparison = crossCompare(left, right);

    float dt = 0;
    if (rightComparison.value < leftComparison.value) {
        dt = right.size() - compareLength - rightComparison.index;
    } else {
        dt = (left.size() - compareLength - leftComparison.index) * -1.0;
    }
    dt *= 0.00001;

    return timeDifferenceToAngle(dt);
}

DirectionSensor::tuple DirectionSensor::crossCompare(WrappingArray& firstSignal, WrappingArray& secondSignal) {

    unsigned short signalLength = secondSignal.size() + 1 - compareLength;
    unsigned short correlation[1000];

    for (unsigned short offset = 0; offset < signalLength; offset++) {
        correlation[offset] = cross.compute(firstSignal, secondSignal, compareLength, offset);
    }
    tuple min = minElement(correlation, signalLength);
    return min;
}


// theta = 90 - asin ( b / a )
// b = 343 / dt
// a = 0.10 m
// pi / 2 = 1.57079632679

double DirectionSensor::timeDifferenceToAngle(double timeDifference) {
    double a = 0.1;
    double b = 343.0 * timeDifference;
    return 1.57079632679 - asin(b / a);
}
