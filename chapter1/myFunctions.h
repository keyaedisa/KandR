#include <stdio.h>
#define MAXLINE 1000 //max length of 2nd dimension


int * nullpointer = NULL;

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
       ++z;
        destinationArray[lineNumber][z] = '\n';        
        ++lineNumber;
        z = 0;
       }
    }
    destinationArray[lineNumber][0] = '\0';
    /*
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
    } printf("%d", x);
    destinationArray[lineNumber-1][x+1] = '\0';
    */
}
// Prints lines from array, line by line, with max 1000 length
void printLines(char (*inputArray)[MAXLINE]){
    printf("\nStored lines\n\n");

    for(int x = 0; inputArray[x][0] != '\0'; ++x){
        printf("Line %d reads:\n", x+1);
        puts(inputArray[x]);
        printf("\n\n");
    }

    /*
    for(int x, y = 0; x < MAXLINE && inputArray[x][y] != '\0'; ++x){
        printf("Line Number %d reads:\n\n", x+1);
        while(inputArray[x][y] != '\n'){
            printf("%c", inputArray[x][y]);
            ++y;
        }
        printf("\n\n\n");
        y = 0;
        if(inputArray[lineNumber][y] != '\n'){
            printf("%c", inputArray[lineNumber][y]);
        }
        if(inputArray[lineNumber][y] == '\n'){
            printf("\n");
            ++lineNumber;
            y = 0;
    } */
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