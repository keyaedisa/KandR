#include <stdio.h>
#include "myFunctions.h"

/*
Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
*/

unsigned invert(unsigned x, unsigned p, unsigned n){
    unsigned mask1 = ~(~0 << n) << (p-n+1);
    unsigned mask2 = mask1;
    mask1 &= x;
    mask1 = ~mask1 & mask2;
    x &= ~mask2;
    x |= mask1;

    x = x & (x)
    return (x);
};

void main(){
    unsigned x = 37492;
    fprintf(stdout,"%s","Starting X value ");
    intDecimalToBinary(x);
    unsigned inverted = invert(x,13,7);
    fprintf(stdout,"%s","X value after inversion ");
    intDecimalToBinary(inverted);
}