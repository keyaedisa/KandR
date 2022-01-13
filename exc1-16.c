#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

/* excercise 1-16. revise the main routine of the
longest-line program so it will correctly print
the length of arbitrary long input lines, and as 
much as possible of the text. */

int fetchLine(char line[], int maxline);
void copy(char to[], char from[]);
void addToStorage(char line[]);
void printCurrentLine(int lineNumber);

char lineStorage[MAXLINE][MAXLINE];     /* stores whole lines for later*/
int lineNumber = 0;
//int z = 0;
/*print the longest input*/




int main(){
    int len;                        /* current line length */
    int max;                        /*maximum length seen so far */
    int lineLengthStorage[MAXLINE]; /* stores lines lengths */
    char line[MAXLINE];             /* current input line */
    char longest[MAXLINE];          /* longest line saved here */
    
    
    printf("hello, world\n");

    int i = 0; 
    max = 0;

    while ((len = fetchLine(line, MAXLINE)) > 0){
        addToStorage(line);
        ++lineNumber;
        lineLengthStorage[i] = len;
        ++i;
        //++z;

        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0){                     
        printf("\n");
        printf("Longest line: %s", longest);
        
        for(int j = 0; j < MAXLINE && lineLengthStorage[j] != 0; ++j){
            printf("Line number %d had a length of %d characters.\n", j+1, lineLengthStorage[j]-1);
            printCurrentLine(j);
        }

    }
     return 0;
}


/* getline: read a line into s, return length */
int fetchLine(char s[],int lim){
    int i;
    int c;

    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
        s[i] = c;
        
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]){

    int i;
    i = 0;
    
    while ((to[i] = from[i]) != '\0')
        ++i;
}

// addToStorage: adds LINE too lineStorage

void addToStorage(char line[]){
    int z = 0;
    
    while(line[z] != '\n'){
        lineStorage[lineNumber][z] = line[z];
        ++z;
    }
    ++z;
    lineStorage[lineNumber][z] = '\n';  
}

// printCurrentLine: prints line it was called on

void printCurrentLine(int lineNumber){
    printf("Line reads as follows: ");
    int z = 0;
    while(lineStorage[lineNumber][z] != '\n'){
        printf("%c", lineStorage[lineNumber][z]);
        ++z;
    }
    printf("\n");
}