#include <stdio.h>

/* *
 * Exercise 1-12. Write a program that prints its input one word per line.
 * */

void main(){
    int c, inWord;
    
    #define OUT 0
    #define IN 1

    inWord = OUT;

    printf("This program will receive input and then spit it back out one word per line. Try now.\n");
    while((c = getchar()) != EOF){
        if(c != ' ' && c != '\n' && c !='\t'){
            if(inWord == OUT){
                inWord = IN;
            }
            putchar(c);

        }
        else if(inWord == IN){
            inWord = OUT;
            putchar('\n');
        }
    }
}
 