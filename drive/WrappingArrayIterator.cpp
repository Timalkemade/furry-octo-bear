/* 
 * File:   WrappingArrayIterator.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 13:08
 */

#include "WrappingArrayIterator.hpp"


WrappingArrayIterator::WrappingArrayIterator() {
}

WrappingArrayIterator::~WrappingArrayIterator() {
}

void WrappingArrayIterator::init(int aStart, int aSize, int theMaxSize, int *anArray) {
    start = aStart;
    arraySize = aSize;
    maxSize = theMaxSize;
    array = anArray;
    isFirst = true;
    if(isFull()) {
        nextValuePointer = aStart;        
    } else {
        nextValuePointer = 0;
    }
    
}

bool WrappingArrayIterator::hasNext() {
    // if array is full
    return nextValuePointer != start || (isFirst && arraySize != 0);
}

int WrappingArrayIterator::next() {
    isFirst = false;
    int value = array[nextValuePointer];
    nextValuePointer++;
    if(nextValuePointer == maxSize) {
        nextValuePointer = 0;
    }
    return value;
}

bool WrappingArrayIterator::isFull() {
    return maxSize == arraySize;
}


