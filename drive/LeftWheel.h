#ifndef LEFT_WHEEL_H
#define LEFT_WHEEL_H

#include "Wheel.h"
#include <Servo.h>
#include "PinMapper.h"
class LeftWheel : public Wheel { 

public: 
  LeftWheel();
  LeftWheel(PinMapper pinMapper, int aStopAngle);
  void setAngle(int anAngle);
  void maxForward();
  void maxBackward();
  void halt();

private:
    int angle;
    int stopAngle;
    int maxForwardAngle;
    int maxBackwardAngle;
    Servo wheelServo;
    
    void updateWheelSpeed();
};

#endif 


