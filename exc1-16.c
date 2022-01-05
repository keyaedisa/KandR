#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int fetchLine(char line[], int maxline);
void copy(char to[], char from[]);

char* tempLineHolder[MAXLINE];

/*print the longest input*/

int main(){
    int len;                        /* current line length */
    int max;                        /*maximum length seen so far */
    int lineLengthStorage[MAXLINE]; /* stores lines lengths */

    char line[MAXLINE];             /* current input line */
    char longest[MAXLINE];          /* longest line saved here */
    
    int i = 0; 
    max = 0;

    while ((len = fetchLine(line, MAXLINE)) > 0){
        lineLengthStorage[i] = len;
        ++i;
        if (len > max) {
            
            //lineLengthStorage[i] = len;
            //++i;
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0){                      /* there was a line */
        printf("\n");
        printf("Longest line: %s", longest);
        for(int j = 0; j < MAXLINE && lineLengthStorage[j] != 0; ++j){
            printf("Line number:%d had a length of:%d characters. It reads as follows: %d\n", j+1, lineLengthStorage[j]-1, *tempLineHolder[j]);
        }
    }
    return 0;
}


/* getline: read a line into s, return length */
int fetchLine(char s[],int lim){
    int i;
    char c;

    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
        s[i] = c;
        *tempLineHolder[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        //*tempLineHolder[i] = c;
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