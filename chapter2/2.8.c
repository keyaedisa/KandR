#include <stdio.h>
#include "myFunctions.h"

/*Exercise 2-8. Write a function rightrot(x,n) that returns
the value of the integer x rotated to the right by n positions.
*/

unsigned rightRotate(unsigned x, unsigned n){
    unsigned size = sizeof(x) * 8;
    return (x >> n) | (x << (size - n));
}

void main(){
    unsigned x = 3478;
    intDecimalToBinary(x-2);
    intDecimalToBinary(x-1);
    intDecimalToBinary(x);
    intDecimalToBinary(x+1);
    intDecimalToBinary(x+2);
    intDecimalToBinary(rightRotate(x,4));
    unsigned p = rightRotate(x,5);
    intDecimalToBinary(p);
}