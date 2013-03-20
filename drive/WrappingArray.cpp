/* 
 * File:   WrappingArray.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 13:02
 */

#include "WrappingArray.hpp"

WrappingArray::WrappingArray() {
    nextValuePointer = 0;
    maxSize = 9;
    arraySize = 0;

}

WrappingArray::~WrappingArray() {
}

unsigned int WrappingArray::size() {
    return arraySize;
}

void WrappingArray::writeNext(int value) {
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

int WrappingArray::get(int index) {
    int arrayStart = 0;
    if (isFull()) {
        arrayStart = nextValuePointer;
    }
    return values[(arrayStart + index) % maxSize];
}


