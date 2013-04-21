/* 
 * File:   CrossCorrelation.h
 * Author: tim
 *
 * Created on 24 August 2012, 22:09
 */

#ifndef CROSSCORRELATION_H
#define	CROSSCORRELATION_H

#include "WrappingArray.h"

class CrossCorrelation {
public:
    CrossCorrelation();
    virtual ~CrossCorrelation();
    int compute(
            WrappingArray& firstSignal,
            WrappingArray& secondSignal,
            int compareLength,
            int offset);
};

#endif	/* CROSSCORRELATION_H */

