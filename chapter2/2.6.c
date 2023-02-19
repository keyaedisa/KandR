#include <stdio.h>
#include "myFunctions.h"

/*
Exercise 2-6. Write a function setbits(x,p,n,y) that
returns x with the n bits that begin at position p 
set to the rightmost n bits of y, leaving the other bits unchanged.

Finally was able to understand and finish this. Proud of this one.
*/

/* getbits:  get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}

/* setBits: returns x with the n bits beginning at position p set to the 
rightmost n bits of y, leaving the other bits unchanged
void setBits(unsigned x, int p, int n, unsigned y){
    fprintf(stdout,"%s\n%s%d%s%d%s%d%s%d%s%d%s\n","=========================", \ 
    "Returning ",x," with the ",n," rightmost bits replaced with the ",n, \
    " rightmost bits of ",y," starting at position: ",p," with the furthest rightmost bit represented as 0.");
    unsigned mask = ~(~0 << n) << (p-n+1);
    intDecimalToBinary(x);
    intDecimalToBinary(y);
    fprintf(stdout,"%s","Return value:");
    x &= ~mask;
    x |= (y & mask);
    intDecimalToBinary(x);
    fprintf(stdout,"%s\n","=========================");
} */

int main(){
unsigned x = 37492;
unsigned y = 4789;
printf("%lu\n",setBits(x,7,4,y));
setBits(x,6,4,y);
setBits(x,5,3,y);
setBits(x,4,5,y);
setBits(x,14,7,y);
}