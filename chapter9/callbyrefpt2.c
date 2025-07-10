//utility of the call by reference function

#include <stdio.h>
void areaperi (int, float *, float *);
int main () {
    int radius;
    float area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    areaperi (radius, &area, &perimeter);
    printf("\nArea = %0.2f\n", area);
    printf("Perimeter = %0.2f\n", perimeter);
    return 0;
}

void areaperi (int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}