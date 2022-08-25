#include <stdio.h>
#include "myFunctions.h"


/* write a loop equivalent to the for loop
above without using && or || 

for(i=0;i<lim-1&&(c=getchar())!='\n'&&c!=EOF;++i)
s[i]=c;

*/

int main(){
    char line[MAXLINE];
    lineSaver(line);
    printLines(line);

    return 0;
}

