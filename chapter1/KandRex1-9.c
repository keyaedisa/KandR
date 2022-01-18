#include <stdio.h>
/* copy input to output; 2nd version */
void main()
{
    int c;
    while((c = getchar()) != EOF){
        if(c  == ' '){
            putchar(c);
            while((c = getchar()) == ' '){
                ; // we're doing nothing here in an attempt to skip repeated blanks
            }
        }
        if(c != EOF){
            putchar(c);
        }
    }
}


