/* 
 * File:   Timer.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 11:49
 */

#include "Timer.h"

#include <WProgram.h>

Timer::Timer(unsigned long pDuration) {
    duration = pDuration;
    reset();
}

Timer::~Timer() {
}

void Timer::reset() {
    endTime = millis() + duration;
}

bool Timer::hasEnded() {
    return millis() > endTime;
}

