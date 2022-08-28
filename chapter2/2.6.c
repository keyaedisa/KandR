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

}


int main(){
unsigned x = 9713;
unsigned bits = getbits(x,0,0);
printf("%u",bits);
}