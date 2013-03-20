/* 
 * File:   WrappingArray.h
 * Author: Tim
 *
 * Created on 4 augustus 2012, 13:02
 */

#ifndef WRAPPINGARRAY_H
#define	WRAPPINGARRAY_H

class WrappingArray {
public:
    WrappingArray();
    virtual ~WrappingArray();

    unsigned int size();
    void writeNext(int value);
    int get(int index);
    bool isFull();
private:

    unsigned int maxSize;
    int values[100];
    int nextValuePointer;
    int arraySize;

};

#endif	/* WRAPPINGARRAY_H */

