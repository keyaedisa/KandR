#include <stdio.h>

/* this is my completed ktr ex1.4. it converts celsius temps to fahr and then prints them on a table. it is based on the given example. */

void main(){
float fahr, celsius;
float lower, upper, step;
lower = -20; /* lower limit of temperatuire scale */
upper = 150; /* upper limit */
step = 20; /* step size */
celsius = lower;
printf("i suppose this counts as a header\n");
printf("ex1.3 and 1.4 lets go\n");
while (celsius <= upper) {
fahr = (celsius*9.0/5.0)+32;
printf("%3.0f %6.1f\n", celsius, fahr);
celsius = celsius + step;


}
}