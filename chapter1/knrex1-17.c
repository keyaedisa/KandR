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

void lineSaver(char c);
void printLinesOverEighty();


int main(){
    char c;
    while((c = getchar()) != EOF){
        lineSaver(c);
    }
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

void lineSaver(char c){
    int x = 0;
    while(c != '\n'){
        int z = 0;
        while((c = getchar()) != '\n'){
            lineStorage[lineNumber][z] = c;
            ++z;
            ++x;
        }    
        lineStorage[lineNumber][x] = '\n';        
        ++lineNumber;
            
    }
    lineStorage[lineNumber][0] = '\0';
    leave = TRUE;
}

void printLinesOverEighty(){
    int y = 0; // iterators

    while(lineStorage[lineNumber][0] != '\0'){
        
        while(lineStorage[lineNumber][y] != '\n'){
            printf("%c", lineStorage[lineNumber][y]);
            ++y;
        }
        
        printf("\n");
        ++lineNumber;
    }
}