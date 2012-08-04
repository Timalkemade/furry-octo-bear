/* 
 * File:   Timer.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 11:49
 */

#include "Timer.h"

#include <WProgram.h>

unsigned long endTime;

Timer::Timer(unsigned long duration) {
    endTime = millis() + duration;
}

Timer::~Timer() {
}

Timer::hasEnded() {
    return millis() > endTime;
}

