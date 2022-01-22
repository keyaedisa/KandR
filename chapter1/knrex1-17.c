#include <stdio.h>
#include "myFunctions.h"

/* Exercise 1-17.  Write a program to print
** all input lines that are longer than 80 characters. 
*/

/* Abandonding this because I realized that I am jus spending
way too much time on this and im not even close since i tried way
2 hard. so yea. i fucked this one up lol */




int main(){
    char lineStorage[MAXLINE][MAXLINE];
    printf("Enter your lines below. Only those longer than 80 will be printed.\n\n");
    lineSaver(lineStorage);
    //puts(lineStorage[0]);
    printLines(lineStorage);
    

   
    return 0;
}

