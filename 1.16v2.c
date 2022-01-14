#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */

/* couldn't let my self go on without doing it as
** the book asked. so here is the exact same functionality
** with better formatting
*/

int getsline(char line[], int maxline);
void copy(char to[], char from[]);     /* print the longest input line */
int main(){
    int len;            /* current line length */
    int max;            /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    char lengths[MAXLINE]; /* keeps track of lengths */
    char storedLines[MAXLINE][MAXLINE]; /* stores lines */
    max = 0;
    int i = 0;              /* lengths[] iterator */
    int x = 0;           /* storedLines[] iterator */
    int lineNumber = 0; /* stores current line number */

    printf("Enter your text below to have it analyzed and returned to you.\n\n");    
    
    while ((len = getsline(line, MAXLINE)) > 0){
        
            lengths[i] = len;
            i++;
        
            int y = 0;
            while(line[y] != '\n'){
                storedLines[lineNumber][y] = line[y];
                ++y;  
            }

            ++y;
            storedLines[lineNumber][y] = '\n';
            ++lineNumber;  

            if (len > max) {
                max = len;
                copy(longest, line);
            }
        
    }
    printf("\n");     
    if (max > 0){  /* there was a line */
    printf("Longest line was: %s\n", longest);
    lineNumber = 0;    /* lineNumber reset */
    for(int j = 0; j < MAXLINE && lengths[j] > 0; ++j){
        printf("Line %d has %d charachters.\n", j + 1, lengths[j]-1);
        printf("It reads as follows: ");
        
        int z = 0;
        while(storedLines[lineNumber][z] != '\n'){
            printf("%c", storedLines[lineNumber][z]);
            ++z;
        }
        ++lineNumber;
        printf("\n\n");
        
    }
    
    }
    return 0;
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