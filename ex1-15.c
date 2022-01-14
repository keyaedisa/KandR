#include <stdio.h>
/* Exercise 1.15. Rewrite the temperature 
conversion program of Section 1.2 to use a 
function for conversion. */
void fahrToCelsius();
void main(){
fahrToCelsius();
}
void fahrToCelsius(){
    float fahr, celsius;
    float lower, upper, step;
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    printf("Temp conversions now in a function!\n");
    printf("I snapped\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;   
    }
}