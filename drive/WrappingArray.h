/* 
 * File:   WrappingArray.h
 * Author: Tim
 *
 * Created on 4 augustus 2012, 13:02
 */

#ifndef WRAPPINGARRAY_H
#define	WRAPPINGARRAY_H

#include "WrappingArrayIterator.h"


class WrappingArray {
public:
    WrappingArray(int size);
    virtual ~WrappingArray();
    
    void writeNext(int value);
    int size();
    
    WrappingArrayIterator initIterator();
    
    
    
private:

};

#endif	/* WRAPPINGARRAY_H */

