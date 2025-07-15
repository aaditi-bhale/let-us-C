//including the macrodefinitions file

#include <stdio.h>
#include "macrodefinitions.h"
int main () 
{
    float r, a,b,c,ba,h,s;
    float ars, arc, art;
    float peris, peric, perit;
    printf("Enter the sides of the triangle: \n");
    scanf("%f %f %f", &a, &b, &c);
    printf("Enter the base and height of the triangle: \n");
    scanf("%f %f", &ba, &h);
    perit = PERIT (a,ba,c);
    art = AREAT(b,h);
    printf("The area and perimeter are: %0.2f and %0.2f\n", art, perit);
    printf("Enter the side of the square: \n");
    scanf("%f", &s);
    ars = AREAS(s);
    peris = PERIS(s);
    printf("The area and perimeter are: %0.2f and %0.2f\n", ars, peris);
    printf("Enter the radius of the circle: \n");
    scanf("%f", &r);
    arc = AREAC(r);
    peric = PERIC(r);
    printf("The area and perimeter are: %0.2f and %0.2f\n", arc, peric);
    return 0;





}