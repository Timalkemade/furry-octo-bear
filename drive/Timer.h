/* 
 * File:   Timer.h
 * Author: Tim
 *
 * Created on 4 augustus 2012, 11:49
 */

#ifndef TIMER_H
#define	TIMER_H

class Timer {
public:
    Timer(unsigned long duration);
    virtual ~Timer();
    
    bool hasEnded();
private:

};

#endif	/* TIMER_H */

