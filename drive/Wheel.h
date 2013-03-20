#ifndef WHEEL_H
#define WHEEL_H
class Wheel {

public: 
    virtual void maxForward() = 0;
    virtual void maxBackward() = 0;
    virtual void halt() = 0;
};

#endif
