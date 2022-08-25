#include <stdio.h>
#include "myFunctions.h"
/*Exercise 2-5. Write the function any(s1,s2), which returns
the first location in a string s1 where any character from 
the string s2 occurs, or -1 if s1 contains no characters from s2. 
(The standard library function strpbrk does the same job but returns a pointer to the location.)
*/

int main(){
    char kum[MAXLINE] = "kum duh";
    char moreKum[MAXLINE] = "zenhuk";
    int location;

    location = any(kum, moreKum);
    if(location == -1)
        printf("No matching character was found.");
    else {printf("First case of matching character found at element %d", location);}
}