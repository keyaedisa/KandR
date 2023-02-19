#include <stdio.h>
#include "myFunctions.h"

#define MAX 1000

/*
Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab
into visible escape sequences like \n and \t as it copies the string t to s. Use a switch.
Write a function for the other direction as well, converting escape sequences into the real characters.
*/

void escapeReal(char *s, const char *t){
    for(int i = 0, z = 0; z < strlen(t); i++,z++){
        switch(t[z]){
            case '\n' :
                s[i++] = '\\';
                s[i] = 'n';
                break;
            case '\t' :
                s[i++] = '\\';
                s[i] = 't';
                break;
            default:s[i] = t[z];
        }
    }
}


void escapeAdd(char *s, const char *t){
    for(int i = 0, z = 0; z < strlen(t); i++,z++){
        switch(t[z]){
            case '\\':
                switch(t[++z]){
                    case 'n' :
                        s[i++] = '\n';
                        z++;
                        break;
                    case 't' :
                        s[i++] = '\t';
                        z++;
                        break;
                }
            default:s[i] = t[z];
        }
    }
}

void main(){
    char s[MAX],t[] = "kum squatter \n peepee \t lol \n sex17 \t";
    escapeReal(s,t);
    printf("Original string = %s\n",t);
    printf("String with escapes deactivated and made visible = %s\n",s);
    char z[MAX],p[] = "Sex17 \\n plus Bob \\t ken \\n p";
    printf("Original string = %s\n",p);
    escapeAdd(z,p);
    printf("String with escapes activated and hidden = %s\n",z);
}