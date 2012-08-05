/* 
 * File:   WrappingArray.h
 * Author: Tim
 *
 * Created on 4 augustus 2012, 13:02
 */

#ifndef WRAPPINGARRAY_H
#define	WRAPPINGARRAY_H

#include "WrappingArrayIterator.hpp"

class WrappingArray {
public:
    WrappingArray();
    virtual ~WrappingArray();
    
    unsigned int size();
    void writeNext(int value);
    
    void initIterator(WrappingArrayIterator& iterator);
private:
    bool isFull();
    unsigned int maxSize;
    int values[1024];
    int nextValuePointer;
    int arraySize;

};

#endif	/* WRAPPINGARRAY_H */

