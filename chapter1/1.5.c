#include <stdio.h>
/* print Fahrenheit-Celsius table
this is ex 1-5 of 1.3 where i modified the given program to print the table in reverse order.
original in comments */
void main()
{
int fahr;
for (fahr = 300; fahr >= 0; fahr = fahr - 20)
printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}


/*#include <stdio.h>
//print Fahrenheit-Celsius table//
main()
{
int fahr;
for (fahr = 0; fahr <= 300; fahr = fahr + 20)
printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
*/