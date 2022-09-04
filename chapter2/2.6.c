#include <stdio.h>
#include "myFunctions.h"

/*
Exercise 2-6. Write a function setbits(x,p,n,y) that
returns x with the n bits that begin at position p 
set to the rightmost n bits of y, leaving the other bits unchanged.
*/

/* getbits:  get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}

unsigned setBits(unsigned x, int p, int n, unsigned y){
    unsigned mask = 0;
    
}


int main(){
unsigned x = 100;
intDecimalToBinary(0);
unsigned bits = getbits(x,5,4);
intDecimalToBinary(bits);
printf("%u",bits);
}