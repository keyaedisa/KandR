#include <stdio.h>
#include "myFunctions.h"

/* 
Write an alternative version of squeeze(s1,s2) that deletes each character in s1 tht matches
any character in the string s2. 
*/

int main(){
    char sex[] = "gay sex is magical";
    char antiSex[] = "sexmag";

    int len = strlen(sex);
    printf("Length of sex[50] is %i\n",len);
    printf("%s\n",sex);
    delSame(sex,antiSex);
    printf("sex after delSame: %s\n",sex);
}