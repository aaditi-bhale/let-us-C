//7. area and surface area of rectangle and circle

#include <stdio.h>
int main () {
    float l, b,  r;
    float area_c, circ, area_r, peri;
    double pi = 3.14159;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &l, &b);
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area_c = pi * r * r;
    circ = 2 * pi * r;
    area_r = l * b;
    peri = 2* (l +  b);
    printf("The area and circumference are %0.2f and %0.2f", area_c,  circ);
    printf("\nThe area and perimenter are %0.2f and %0.2f", area_r, peri);
    return 0;
}