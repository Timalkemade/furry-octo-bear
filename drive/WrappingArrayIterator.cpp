/* 
 * File:   WrappingArrayIterator.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 13:08
 */

#include "WrappingArrayIterator.h"

unsigned int pointer;
const unsigned int start;
const unsigned int size;
bool isFirst = true;
int *array;

WrappingArrayIterator::WrappingArrayIterator() {
}

WrappingArrayIterator::~WrappingArrayIterator() {
}

void WrappingArrayIterator::init(int aStart, int aSize, int *anArray) {
    start = aStart;
    pointer = aStart;
    size = aSize;
    array = anArray;
}

bool WrappingArrayIterator::hasNext() {
    // if array is full
    return pointer != start || (isFirst && size != 0);
}

int WrappingArrayIterator::next() {
    isFirst = false;
    int value = array[pointer];
    pointer++;
    if(pointer == size) {
        pointer = 0;
    }
    return value;
}
