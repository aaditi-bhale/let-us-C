//using the header file to calculate interest
#include <stdio.h>
#include "interest.h"

int main ()
{
    float p, n , r, si;
    printf("Enter the values of p, n, r: ");
    scanf("%f %f %f", &p, &n, &r);
    si = INTEREST(p,n,r);
    printf("The simple interest is: %0.2f", si);
    return 0;
}