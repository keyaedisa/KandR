#include <stdio.h>
#include "myFunctions.h"
#define MAXLINE 1000   /* maximum input line length */
/* this took 5 mins for some reason */

int main(){
    char lineStorage[MAXLINE][MAXLINE];

    lineSaver(lineStorage);
    for(int x = 0; lineStorage[x][0] != '\0'; ++x){
        for(int y = 0; lineStorage[x][y]!= '\n' && lineStorage[x][0]!='\n'; ++y){
            if(lineStorage[x][y]!=' ' && lineStorage[x][y]!='\t'){
                printf("%c",lineStorage[x][y]);
            }
        }
    }
    return 0;
}