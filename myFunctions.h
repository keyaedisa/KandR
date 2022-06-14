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


/* getline:  read a line into s, return length  */
int getsline(char s[],int lim){
    int c, i;
    
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
        s[i] = c;
    }    
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]){
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}


// converts hex numbers into their integer value
int htoi(){
    



}