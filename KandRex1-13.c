#include <stdio.h>
/*My attempt at K&R2 Excercise 1-13.
First bit is from the book. It is being used
so that I can focus on the histogram part
since it keeps track of the numbers I need.
Hope this is ok.*/
/* count digits, white space, others */
//void main(){
 /*int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n",
        nwhite, nother);        

    /* Beginning of my code */
    /* currentLengthCount is temp counter for adding lengths 
    of words to be added to array.

    countHolder transports currentLengthCount's
    value 2 its destination*/
    int c, inWord, currentLengthCount, countHolder;
    inWord = currentLengthCount = countHolder = 0;
    
    #define IN 1
    #define OUT 0

    void main(){
        while((c = getchar()) != EOF){
            if(c!=' ' && c!='\t' && c!=){
                if(inWord == OUT){
                    inWord == IN;
                    ++currentLengthCount;
                }
             countHolder = currentLengthCount;   
            }
        }


    }

    


