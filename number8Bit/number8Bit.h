#ifndef NUMBER_8_BIT
#define NUMBER_8_BIT
     
#define Zero  {HIGH, HIGH, HIGH, LOW , HIGH, HIGH, HIGH, LOW }
#define One   {LOW , LOW , HIGH, LOW , LOW , HIGH, LOW , LOW }
#define Two   {HIGH, LOW , HIGH, HIGH, HIGH, LOW , HIGH, LOW }
#define Three {HIGH, LOW , HIGH, HIGH, LOW , HIGH, HIGH, LOW }
#define Four  {LOW , HIGH, HIGH, HIGH, LOW , HIGH, LOW , LOW }
#define Five  {HIGH, HIGH, LOW , HIGH, LOW , HIGH, HIGH, LOW }
#define Six   {HIGH, HIGH, LOW , HIGH, HIGH, HIGH, HIGH, LOW }
#define Seven {HIGH, LOW , HIGH, LOW , LOW , HIGH, LOW , LOW }
#define Eight {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW }
#define Nine  {HIGH, HIGH, HIGH, HIGH, LOW , HIGH, HIGH, LOW }
#define Numbers {Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine}

/*
 * Print a number a number to a 8 bit display with the 
 * following number mapping:
 * 
 *    
 * 0  _
 * 1 | | 2
 * 3  -
 * 4 | | 5
 * 6  - .7
 * 
 *
 */
void printNumber(int pNumber, int pins[]);

#endif
