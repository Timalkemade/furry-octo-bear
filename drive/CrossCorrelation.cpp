#include "CrossCorrelation.h"
#include <stdlib.h>

CrossCorrelation::CrossCorrelation() {

}

CrossCorrelation::~CrossCorrelation() {
}

/**
 * Computes the cross correlation. 
 * Assumes that both arrays are full
 * 
 * @param firstSignal The first signal
 * @param secondSignal The second signal
 * @param offset The time offset for the array
 * @return the sum of the distance between the signals
 */
int CrossCorrelation::compute(
        WrappingArray& firstSignal,
        WrappingArray& secondSignal,
        int compareLength,
        int offset) {
    int correlationSum = 0;

    int firstSignalIdx = firstSignal.size() - compareLength;
    int secondSignalIdx = offset;

    while (firstSignalIdx < firstSignal.size()) {
        int firstVal = firstSignal.get(firstSignalIdx);
        int secondVal = secondSignal.get(secondSignalIdx);
        correlationSum += abs(firstVal - secondVal);
        firstSignalIdx++;
        secondSignalIdx++;
    }
    return correlationSum;
}
