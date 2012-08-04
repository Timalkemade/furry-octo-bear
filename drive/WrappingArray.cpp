/* 
 * File:   WrappingArray.cpp
 * Author: Tim
 * 
 * Created on 4 augustus 2012, 13:02
 */

#include "WrappingArray.h"

const unsigned int size = 1024;
int values[] = int[size];
int pointer = 0;
bool full = false;

WrappingArray::WrappingArray() {
}

WrappingArray::~WrappingArray() {
}

unsigned int WrappingArray::size() {
    return size;
}

void WrappingArray::writeNext(int value) {
    values[pointer] = value;
    pointer++;
    if(pointer == size) {
        pointer = 0;
        full = true;
    }
}

WrappingArrayIterator WrappingArray::initIterator(WrappingArrayIterator iterator) {
    iterator.init(pointer, size, array);
}

bool isFull() {
    return full;
}



