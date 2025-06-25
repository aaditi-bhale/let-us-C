//1. three sides of a triangle are input by the user, and the area is found.

#include <stdio.h>
#include <math.h>
int main () {
    float a,b,c;
    float area, s;
    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c)/2;
    area = sqrt (s * (s-a) * (s-b) * (s-c));
    printf("The area of the triangle is: %0.2f", area);
    return 0;
}