#include <stdio.h>
#include "myFunctions.h"

/*Exercise 2-9. In a two's complement number system,
x &= (x-1) deletes the rightmost 1-bit in x. Explain why.
Use this observation to write a faster version of bitcount.

It deletes the rightmost 1 bit in X for two reasons.
Reason 1 being that 1 in binary is 0001, so if the
rightmost bit is a 1 then it will be deleted by & operand.
Otherwise, the rightmost bit remains 0.

bitcount:  count 1 bits in x 
int bitcount(unsigned x){
    int b;
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}
*/

unsigned bitCount(unsigned x){
    unsigned b;
    for(b = 0; x!=0; x >>= 1)
        if(x & 1)
            b++;
    return (b);
}

void main(){
    printf("%u\n",bitCount(1));
    printf("%u\n",bitCount(2));
    printf("%u\n",bitCount(3));
}