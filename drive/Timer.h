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
    Timer(unsigned long pDuration);
    virtual ~Timer();

    bool hasEnded();

    void reset();
private:
    unsigned long endTime;
    unsigned long duration;

};

#endif	/* TIMER_H */

