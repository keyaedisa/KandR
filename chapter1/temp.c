#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */

/* another test file */

int getsline(char line[], int maxline);
void copy(char to[], char from[]);     /* print the longest input line */
main()
{
	int textlen; /* text length */
	int slen; /* full line length */
	int max; /* maximum full line length */
	int len; /* length returned by getline */
	char line[MAXLINE];
	int nonstop; /* flag to continue loop, instead of 'unknown' break statement */

	textlen = 0;
	slen = 0;
	max = 0;
	nonstop = 1;
	while(nonstop)
	{
		len = getsline(line, MAXLINE);
		slen = slen + len;
		if(len == 0) nonstop = 0;
		if(len == 0 || line[len-1] == '\n')
		{
			if(slen > max)
				max = slen;
			textlen = textlen + slen;
			slen = 0;
		}
	}
	if(max > 0)
	{
		printf("max line length: %d\n", max);
		printf("text length: %d\n", textlen);
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