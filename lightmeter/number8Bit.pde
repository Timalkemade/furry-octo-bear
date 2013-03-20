#include "number8bit.h"

void printNumber(int pNumber, int pins[]) {
  int i;
  
  int numbers[][8] = Numbers;
  for(i=0; i<8; i++) {
    digitalWrite(pins[i],numbers[pNumber][i]);
  }
}
