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
void printLinesOverEighty();


int main(){
    lineSaver();
    printLinesOverEighty();
    
    /*
    int p, f = 0;
    while(lineStorage[f][p] != '\n'){
        printf("%c", lineStorage[f][p]);
        ++p;
    }
    printf("\n");
    ++f;
    p = 0;
    while(lineStorage[f][p] != '\n'){
        printf("%c", lineStorage[f][p]);
        ++p;
    }
    printf("\n");
    ++f;
    p = 0;
    while(lineStorage[f][p] != '\n'){
        printf("%c", lineStorage[f][p]);
        ++p;
    }

    //printLinesOverEighty();

    //printf("nice\n");
    */
    return 0;
}

void lineSaver(){
    char c;
    int x;
    for(x = 0; x < MAXLINE && (c = getchar())!=EOF; ++x){
        if(c != '\n'){
        lineStorage[lineNumber][x] = c;
        }
        if(c == '\n'){
            lineStorage[lineNumber][x] = c;
            ++lineNumber;
        }
    }
    lineStorage[lineNumber-1][x+1] = '\0';
}

void printLinesOverEighty(){
    lineNumber = 0;
    for(int y = 0; y < MAXLINE && lineStorage[lineNumber][0] != '\0'; ++y){
        if(lineStorage[lineNumber][y] != '\n'){
            printf("%c", lineStorage[lineNumber][y]);
        }
        if(lineStorage[lineNumber][y] == '\n'){
            printf("\n");
            ++lineNumber;
        }
    }
}