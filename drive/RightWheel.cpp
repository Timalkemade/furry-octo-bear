#include "RightWheel.h"

RightWheel::RightWheel() {

}

RightWheel::RightWheel(PinMapper pinMapper, int aStopAngle) {
  RightWheel::opposite = LeftWheel(pinMapper, aStopAngle);
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

