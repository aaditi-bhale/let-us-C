//macro templates can also have argument expansions!

#include <stdio.h>
#define AREA(x)(3.14 * x * x)
int main () {
    float r1 = 6.25, r2 = 2.5, a;
    a = AREA(r1);
    printf("The area of the first circle: %0.2f", a);
    a = AREA(r2);
    printf("The area of the second circle: %0.2f", a);
    return 0;
}