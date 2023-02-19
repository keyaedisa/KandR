#include <stdio.h>
#include "myFunctions.h"

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
       int low, high, mid;
       low = 0;
       high = n - 1;
       while (low <= high) {
           mid = (low+high)/2;
           if (x < v[mid])
               high = mid + 1;
           else if (x  > v[mid])
               low = mid + 1;
           else    /* found match */
                return mid;
        }
       return -1;   /* no match */
   }
/*
Exercise 3-1. Our binary search makes two tests inside the loop,
when one would suffice (at the price of more tests outside.)
Write a version with only one test inside the loop and measure the difference in run-time
*/

#define SIZE 2000

int binSearch(int x, int v[], int n){
    int low, high, mid;
    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (low+high)/2;
        if(x < v[mid])
            high = mid + 1;
        else
            low = mid + 1;
        return (x == v[low]) ? low : -1;
    }
    return -1;
}

void main(){
    int v[SIZE];
    int x, n = SIZE;
    for(x = 0; x < n;x++)
        v[x] = x;
    for (x = 0; x < n; x++)
		binsearch(x, v, n);
    printf("%d\n",binSearch(x,v,n));
    printf("%d\n",binsearch(x,v,n));
}