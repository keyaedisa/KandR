#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 1000
/* Exercise 1-17.  Write a program to print
** all input lines that are longer than 80 characters. 
*/

bool abort = false; 
int lineNumber = 0;
char lineStorage[MAXLINE][MAXLINE];
char line[MAXLINE];

void lineSaver(char inputLine[]);


void main(){

    while(abort == 0){
        fgets(line, MAXLINE, stdin);
        lineSaver(line);
    }

    printf("%s", line);

}

void lineSaver(char inputLine[]){
    int z = 0;

    if(inputLine[z] != EOF){    
        while(inputLine[z] != '\n'){
            lineStorage[lineNumber][z] = inputLine[z];
            ++z;
        }
        ++z;
        lineStorage[lineNumber][z] = '\n';
    } 
    else { abort = true;}  
}