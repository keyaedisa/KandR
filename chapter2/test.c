#include <stdio.h>
#include "myFunctions.h"

/*
void intDecimalToBinary(unsigned x){

}
*/

/* getbits:  get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}

int main(){
    //printf("%lu",sizeof(long));
    
}