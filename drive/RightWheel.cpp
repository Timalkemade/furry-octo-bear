#include "RightWheel.h"

RightWheel::RightWheel(Pin pin, int aStopAngle) : opposite(pin, aStopAngle) {
}

void RightWheel::maxForward() {
    RightWheel::opposite.maxBackward();
}

void RightWheel::maxBackward() {
    RightWheel::opposite.maxForward();
}

void RightWheel::halt() {
    RightWheel::opposite.halt();
}

void RightWheel::setAngle(int anAngle) {
    RightWheel::opposite.setAngle(anAngle);
}

