
#ifndef LEFT_WHEEL_H
#define LEFT_WHEEL_H

#include "Wheel.h"
#include "WProgram.h"
#include <Servo.h> 
#include "Pin.h"
class LeftWheel : public Wheel { 

public: 
  LeftWheel(Pin pinMapper, int aStopAngle);
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


