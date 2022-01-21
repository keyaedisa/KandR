#include <stdio.h>
#define MAXLINE 1000 //max length of 2nd dimension


int * nullpointer = NULL;

// Saves lines into array, line by line, with max 1000 length
void lineSaver(char (*destinationArray)[MAXLINE]){
    int lineNumber = 0;
    char c;
    int x;
    for(x = 0; x < MAXLINE && (c = getchar())!=EOF; ++x){
        if(c != '\n'){
        destinationArray[lineNumber][x] = c;
        }
        if(c == '\n'){
            destinationArray[lineNumber][x] = c;
            ++lineNumber;
        }
    }
    destinationArray[lineNumber-1][x+1] = '\0';
}
// Prints lines from array, line by line, with max 1000 length
void printLines(char (*inputArray)[MAXLINE]){
    int lineNumber = 0;
    for(int y = 0; y < MAXLINE && inputArray[lineNumber][y] != '\0'; ++y){
        if(inputArray[lineNumber][y] != '\n'){
            printf("%c", inputArray[lineNumber][y]);
        }
        if(inputArray[lineNumber][y] == '\n'){
            printf("\n");
            ++lineNumber;
        }
    }
}
/* Special version of printLines for Knr 1.17.
Only prints lines 80 characters or longer. 
Nothing crazy since its basically one time use.
*/
void printLinesOverEighty(char (*inputArray)[MAXLINE]){
    int lineNumber = 0;
    for(int y = 0; y < MAXLINE && inputArray[lineNumber][y] != '\0'; ++y){
        if(inputArray[lineNumber][79] > 0){
            if(inputArray[lineNumber][y] != '\n'){
                printf("%c", inputArray[lineNumber][y]);
            }
            if(inputArray[lineNumber][y] == '\n'){
                printf("\n");
                ++lineNumber;
            }
        }
        ++lineNumber;
    }
} 