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
    
    void init(int aStart, int aSize, int *anArray);
    bool hasNext();
    bool next();
private:

};

#endif	/* WRAPPINGARRAYITERATOR_H */

