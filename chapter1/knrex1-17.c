#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 1000
#define TRUE 1
#define FALSE 0
/* Exercise 1-17.  Write a program to print
** all input lines that are longer than 80 characters. 
*/

int leave = FALSE; 
int lineNumber = 0;
char lineStorage[MAXLINE][MAXLINE];
char line[MAXLINE];

void lineSaver();


void main(){

    while(leave != TRUE){
        lineSaver();
    }

    printf("nice");

    
}

void lineSaver(){
    char c;
    while((c = getchar()) != EOF){
        int z = 0;
        while((c = getchar()) != '\n'){
            lineStorage[lineNumber][z] = c;
            ++z;
        }
        ++z;
        lineStorage[lineNumber][z] = '\n';
        ++lineNumber;    
    }
    leave = TRUE;
}