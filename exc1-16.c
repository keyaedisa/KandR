#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

/* excercise 1-16. revise the main routine of the
longest-line program so it will correctly print
the length of arbitrary long input lines, and as 
much as possible of the text. */

int fetchLine(char line[], int maxline);
void copy(char to[], char from[]);


/*print the longest input*/

int main(){
    int len;                        /* current line length */
    int max;                        /*maximum length seen so far */
    int lineLengthStorage[MAXLINE]; /* stores lines lengths */
    char line[MAXLINE];             /* current input line */
    char longest[MAXLINE];          /* longest line saved here */
    char lineStorage[100][100];     /* stores whole lines for later*/
    
    int i = 0; 
    max = 0;

    while ((len = fetchLine(line, MAXLINE)) > 0){
        lineLengthStorage[i] = len;
        ++i;

        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0){                      /* there was a line */
        printf("\n");
        printf("Longest line: %s", longest);
        
        for(int j = 0; j < MAXLINE && lineLengthStorage[j] != 0; ++j){
            printf("Line number:%d had a length of:%d characters.\n", j+1, lineLengthStorage[j]-1);
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