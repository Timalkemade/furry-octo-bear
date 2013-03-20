/* 
 * File:   DrivingController.cpp
 * Author: Tim
 * 
 * Created on July 28, 2012, 12:23 PM
 */


#include "DrivingController.h"
#include "RightWheel.h"
#include "LeftWheel.h"
#include "Pin.h"
#include "Sensor.h"

LeftWheel leftWheel = LeftWheel(LEFT_WHEEL, 94);
RightWheel rightWheel = RightWheel(RIGHT_WHEEL, 93);

DrivingController::DrivingController() {
}

DrivingController::~DrivingController() {
}

void DrivingController::goLeft() {
    leftWheel.maxForward();
    rightWheel.maxBackward();
}

void DrivingController::goRight() {
    rightWheel.maxForward();
    leftWheel.maxBackward();
}

void DrivingController::goForward() {
    rightWheel.maxForward();
    leftWheel.maxForward();
}

void DrivingController::goBackward() {
    rightWheel.maxBackward();
    leftWheel.maxBackward();
}

void DrivingController::halt() {
  rightWheel.halt();
  leftWheel.halt();
}

