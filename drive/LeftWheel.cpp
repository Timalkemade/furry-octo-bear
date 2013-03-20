#include "LeftWheel.h"

LeftWheel::LeftWheel(){
}

LeftWheel::LeftWheel(Pin pinMapper, int aStopAngle) {
    wheelServo.attach(pinMapper);
    stopAngle = aStopAngle;
    maxForwardAngle = 179;
    maxBackwardAngle = 0;
    angle = stopAngle;
}

void LeftWheel::maxForward() {
  angle = maxForwardAngle;
  updateWheelSpeed();
}
void LeftWheel::maxBackward() {
  angle = maxBackwardAngle;
  updateWheelSpeed();
}
void LeftWheel::halt() {
  angle = stopAngle;
  updateWheelSpeed();
}

void LeftWheel::setAngle(int anAngle) {
  angle = anAngle;
  updateWheelSpeed();
}

void LeftWheel::updateWheelSpeed() {
    wheelServo.write(angle);
}




