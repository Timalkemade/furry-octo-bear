/* 
 * File:   newsimpletest.cpp
 * Author: Tim
 *
 * Created on 4-aug-2012, 14:24:01
 */

#include <stdlib.h>
#include <iostream>
#include "WrappingArray.h"

/*
 * Simple C++ Test Suite
 */

void testSize() {
    WrappingArray wrappingArray;
    int result = wrappingArray.size();
    if (1024 == result) {
        std::cout << "%TEST_FAILED% time=0 testname=testSize (newsimpletest) message=error message sample" << std::endl;
    }
}

void testWriteNext() {
    int value;
    WrappingArray wrappingArray;
    wrappingArray.writeNext(value);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testWriteNext (newsimpletest) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testSize (newsimpletest)" << std::endl;
    testSize();
    std::cout << "%TEST_FINISHED% time=0 testSize (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testWriteNext (newsimpletest)" << std::endl;
    testWriteNext();
    std::cout << "%TEST_FINISHED% time=0 testWriteNext (newsimpletest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

