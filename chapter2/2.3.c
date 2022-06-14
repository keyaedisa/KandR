#include <stdio.h>
#include "myFunctions.h"


/*

Write a function -htoi(s)-, which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. 
The allowable digits are 0 through 9, a through f, and A through F.

*/

void main(){
	char hexadecimal[];

    printf("\nEnter hex to be converted to its integer value\n\n");
    linesaver(hexadecimal);
	htoi(hexadecimal);


}
