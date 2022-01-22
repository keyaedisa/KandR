#include <stdio.h>
#include "myFunctions.h"

/* Exercise 1-17.  Write a program to print
** all input lines that are longer than 80 characters. 
*/






int main(){
    char lineStorage[MAXLINE][MAXLINE];
    printf("Enter your lines below. Only those longer than 80 will be printed.\n\n");
    lineSaver(lineStorage);
    //puts(lineStorage[0]);
    printLines(lineStorage);
    //printLinesOverEighty(lineStorage);

   
    return 0;
}

