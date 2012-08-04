#ifndef RIGHT_WHEEL_H
#define RIGHT_WHEEL_H

#include "Wheel.h"
#include "LeftWheel.h"

class RightWheel : public Wheel {
  
public: 
  RightWheel();
  RightWheel(PinMapper pinMapper, int aStopAngle);
  void maxForward();
  void maxBackward();
  void halt();
  void setAngle(int anAngle);

private:
  LeftWheel opposite;
};
#endif 

