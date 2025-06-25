//5. receive (x,y) and convert it into polar form

#include <stdio.h>
#include <math.h>
int main () {
    int x,y;
    float r,phi; //phi is in radians
    printf("Enter the x and y coordinates: ");
    scanf("%d %d", &x, &y);
    r = sqrt ( (x*x) + (y*y));
    phi = atan2(y, x); //used atan2 instead of atan(y/x), handles when x = 0, and handles diff quadrants.
    printf("The polar coordinates are %0.2f and %0.2f", r, phi);
    return 0;
}