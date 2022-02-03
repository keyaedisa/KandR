#include <stdio.h>
#include "myFunctions.h"

#define lim 1000

/* write a loop equivalent to the for loop
above without using && or || 

for(i=0;i<lim-1&&(c=getchar())!='\n'&&c!=EOF;++i)
s[i]=c;

*/

int main(){
    char line[lim];
    lineSaver(line);
    printLines(line);

    return 0;
}

