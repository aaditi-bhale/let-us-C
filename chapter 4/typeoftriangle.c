//q1. if  three sides are input, check whether the triangle is an isoceles, equilateral,scalene or right-angled.

#include <stdio.h>
#include <math.h>
int main () {
    int side1, side2, side3, largeside, other1, other2;
    printf("Enter the three sides of your triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 >= side2 && side1 >= side3) {
        largeside = side1;
        other1 = side2;
        other2 = side3;
    }
    else if (side2 >= side1 && side2 >= side3) {
        largeside = side2;
        other1 = side1;
        other2 = side3;
    }
    else {
        largeside = side3;
        other1 = side1;
        other2 = side2;
    }
    if (largeside * largeside == (other1 * other1) + (other2 * other2)) {
        printf("It's a right-angled triangle.\n");
    }
    else if (side1 ==  side2 == side3)
    printf("It's an equilateral triangle.");
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    printf("It's an isoceles triangle.");
    else 
    printf("It's a scalene triangle.");
    return  0;
}