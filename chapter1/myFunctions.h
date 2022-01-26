#include <stdio.h>
#define MAXLINE 1000 //max length of 2nd dimension
#define SPACE ' '
#define TAB '\t'
#define TABSIZE 8


// Saves lines into array, line by line, with max 1000 length
void lineSaver(char (*destinationArray)[MAXLINE]){  
    int z, lineNumber = 0;
    char c;    
    while((c = getchar()) != EOF){    
        if(c != '\n'){
            destinationArray[lineNumber][z] = c;
            ++z;
        }
        if(c == '\n'){
            destinationArray[lineNumber][z] = '\n';        
            ++lineNumber;
            z = 0;
       }
    }
    destinationArray[lineNumber][0] = '\0';
}
// Prints lines from array, line by line, with max 1000 length
void printLines(char (*inputArray)[MAXLINE]){
    printf("\nStored lines\n\n");
    for(int x = 0; inputArray[x][0] != '\0'; ++x){
        printf("Line %d reads:\n", x+1);
        puts(inputArray[x]);
        printf("\n\n");
    }
}

void reverses(){
    char c;
    char currentLine[MAXLINE];
    
    for(int x = 0; (c = getchar())!= EOF; ++x){
        if(c != '\n'){
            currentLine[x] = c;
        }
        if(c == '\n'){
            --x;
            printf("\n");
            while(x >= 0){
                printf("%c", currentLine[x]);
                --x;
            }
            printf("\n\n");
        }
    }    
}

void detab(){
    char c;
    char currentLine[MAXLINE];
    
    for(int x, y, z = 0; (c = getchar())!= EOF; ++x){
        if(c != '\n'){
            currentLine[x] = c;
        }
        if(c == TAB){
            y = x;
            while(y < TABSIZE){
                currentLine[y] = SPACE;
            }
            x = x + y;
            y = 0;
        }
        if(c == '\n'){
            currentLine[x] = c;
            ++x;
            printf("\n");
            while(currentLine[z]!='\n'){
                printf("%c", currentLine[y]);
                ++z;
            }
            z = x;
            printf("\n\n");
        }
    }      
}