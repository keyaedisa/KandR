#include <stdio.h>

void main(){
    int c; 
    while((c = getchar()) != EOF){
        if(c == '\t'){
            printf("\\tab");
        }
        if(c == '\\'){
            printf("\\\\");
        }
        if(c == '\b'){
            printf("\\b");
        }
        else{
            putchar(c);
        }
    }



}