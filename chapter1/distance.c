//4.km distance converted into meters,  feet, inches and centimeters

#include <stdio.h>
int main() {
    float dist, m, ft, inch, cm;
    printf("Enter the distance (in km): ");
    scanf("%f", &dist);
    m = dist * 1000;
    printf("\nThe distance in meters is: %f", m);
    ft = dist * 3280.84;
    printf("\nThe distance in feet is: %f", ft);
    inch = dist* 39370.1;
    printf("\nThe distance in inches is: %f", inch);
    cm = dist * 100000;
    printf("\nThe distance in cm is: %f", cm);
    return 0;
} 