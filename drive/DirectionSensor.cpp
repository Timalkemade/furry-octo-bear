/* 
 * File:   DirectionSensor.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 12:55
 */

#include "DirectionSensor.h"
#include <math.h>
#include "WProgram.h"

DirectionSensor::DirectionSensor(Pin pLeftSensorPin, Pin pRightSensorPin, unsigned short pCompareLength, unsigned short pMaxSize) :
leftSignal(pMaxSize), rightSignal(pMaxSize), leftSoundSensor(pLeftSensorPin), rightSoundSensor(pRightSensorPin) {
    maxSize = pMaxSize;
    compareLength = pCompareLength;
}

DirectionSensor::~DirectionSensor() {
}

void DirectionSensor::update() {
    update(leftSoundSensor.read(), rightSoundSensor.read());
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

unsigned short maximum(WrappingArray& arr) {
    unsigned short maxValue = 0;
    for (unsigned short i = 0; i < arr.size(); i++) {
        if (arr.get(i) >= maxValue) {
            maxValue = arr.get(i);
        }
    }
    return maxValue;
}

unsigned short minimum(WrappingArray& arr) {
    unsigned short minValue = 10000;
    for (unsigned short i = 0; i < arr.size(); i++) {
        if (arr.get(i) <= minValue) {
            minValue = arr.get(i);
        }
    }
    return minValue;
}

float DirectionSensor::read() {
    minimizeCrossComparison(leftSignal, rightSignal);
}

float DirectionSensor::minimizeCrossComparison(WrappingArray& left, WrappingArray& right) {
    tuple rightComparison = crossCompare(right, left);
    tuple leftComparison = crossCompare(left, right);

    float dt = 0;
    if (rightComparison.value < leftComparison.value) {
        dt = right.size() - compareLength - rightComparison.index;
    } else {
        dt = (left.size() - compareLength - leftComparison.index) * -1.0;
    }
    // * 1/ 83000
    dt *= 0.00001204819;

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
    double a = 0.155;
    double b = 343.0 * timeDifference;
    return 1.57079632679 - asin(b / a);
}
