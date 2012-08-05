/* 
 * File:   WrappingArrayIterator.h
 * Author: Tim
 *
 * Created on 4 augustus 2012, 13:08
 */

#ifndef WRAPPING_ARRAY_ITERATOR_H
#define	WRAPPING_ARRAY_ITERATOR_H

class WrappingArrayIterator {
public:
    WrappingArrayIterator();
    virtual ~WrappingArrayIterator();
    
    void init(int start, int arraySize, int maxSize, int *array);
    bool hasNext();
    int next();
private:
    int start;
    int arraySize;
    int maxSize;    
    int *array;

    int nextValuePointer;
    bool isFirst;

    bool isFull();
};

#endif	/* WRAPPINGARRAYITERATOR_H */

