/* 
 * File:   WrappingArray.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 13:02
 */

#include "WrappingArray.h"

WrappingArray::WrappingArray(unsigned short pMaxSize) {
    nextValuePointer = 0;
    maxSize = pMaxSize;
    arraySize = 0;

}

WrappingArray::~WrappingArray() {
}

unsigned short WrappingArray::size() {
    return arraySize;
}

void WrappingArray::writeNext(unsigned short value) {
    values[nextValuePointer] = value;
    nextValuePointer++;
    if (arraySize < maxSize) {
        arraySize++;
    }
    if (nextValuePointer == maxSize) {
        nextValuePointer = 0;
    }
}

bool WrappingArray::isFull() {
    return arraySize == maxSize;
}

unsigned short WrappingArray::get(unsigned short index) {
    unsigned short arrayStart = 0;
    if (isFull()) {
        arrayStart = nextValuePointer;
    }
    return values[(arrayStart + index) % maxSize];
}


