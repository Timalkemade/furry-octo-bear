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
    WrappingArray(unsigned short pMaxSize);
    virtual ~WrappingArray();

    unsigned short size();
    void writeNext(unsigned short value);
    unsigned short get(unsigned short index);
    bool isFull();
private:

    unsigned short maxSize;
    unsigned short values[1000];
    unsigned short nextValuePointer;
    unsigned short arraySize;

};

#endif	/* WRAPPINGARRAY_H */

