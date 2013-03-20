/* 
 * File:   DrivingController.h
 * Author: Tim
 *
 * Created on July 28, 2012, 12:23 PM
 */

#ifndef DRIVINGCONTROLLER_H
#define	DRIVINGCONTROLLER_H

class DrivingController {
public:
    DrivingController();
    virtual ~DrivingController();
    void goLeft();
    void goRight();
    void goForward();
    void goBackward();
    void halt();    
private:

};

#endif	/* DRIVINGCONTROLLER_H */


