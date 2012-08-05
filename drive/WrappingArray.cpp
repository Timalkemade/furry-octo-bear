/* 
 * File:   WrappingArray.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 13:02
 */

#include "WrappingArray.hpp"

WrappingArray::WrappingArray() {
}

WrappingArray::~WrappingArray() {
}

unsigned int WrappingArray::size() {
    return arraySize;
}

void WrappingArray::writeNext(int value) {
    values[nextValuePointer] = value;
    nextValuePointer++;
    if(arraySize < maxSize) {
        arraySize++;
    }
    if(nextValuePointer == maxSize) {
        nextValuePointer = 0;
    }
}

void WrappingArray::initIterator(WrappingArrayIterator& iterator) {
    iterator.init(nextValuePointer, arraySize, maxSize, values);
}

bool WrappingArray::isFull() {
    return arraySize == maxSize;
}


