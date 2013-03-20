/* 
 * File:   DirectionSensor.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 12:55
 */

#include "DirectionSensor.h"

DirectionSensor::DirectionSensor(Pin pLeftSensorPin, Pin pRightSensorPin, int pCompareLength) {
    cross = CrossCorrelation();
    compareLength = pCompareLength;
}

DirectionSensor::~DirectionSensor() {
}

void DirectionSensor::update() {
    leftSignal.writeNext(leftSoundSensor.read());
    rightSignal.writeNext(rightSoundSensor.read());
}

DirectionSensor::tuple DirectionSensor::minElement(int elements[], int size) {
    int minValue = 10000;
    int minIndex = 0;
    for (int i = 0; i < size; i++) {
        if (elements[i] <= minValue) {
            minValue = elements[i];
            minIndex = i;
        }
    }
    return tuple(minIndex, minValue);
}

int DirectionSensor::read() {
    minimizeCrossComparison(rightSignal, leftSignal);
}

int DirectionSensor::minimizeCrossComparison(WrappingArray& right, WrappingArray& left) {
    tuple rightComparison = crossCompare(right, left);
    tuple leftComparison = crossCompare(left, right);

    int dt = 0;
    if (rightComparison.value < leftComparison.value) {
        dt = right.size() - compareLength - rightComparison.index;
    } else {
        dt = (left.size() - compareLength - leftComparison.index) * -1;
    }
    return dt;
}

DirectionSensor::tuple DirectionSensor::crossCompare(WrappingArray& firstSignal, WrappingArray& secondSignal) {
    int signalLength = secondSignal.size() + 1 - compareLength;
    for (int offset = 0; offset < signalLength; offset++) {
        correlation[offset] = cross.compute(firstSignal, secondSignal, compareLength, offset);
    }

    tuple min = minElement(correlation, signalLength);
    return min;
}
