//angle is entered and its sin cos and trig 
#include <stdio.h>
#include <math.h>
int main() {
    double angle, cos_val, sin_val, tan_val;
    printf("Enter the angle: ");
    scanf("%d", &angle);
    sin_val = sin(angle);
    cos_val = cos(angle);
    tan_val = tan(angle);
    printf("The trig ratios are: %d, %d and %d", sin_val, cos_val, tan_val);
    return 0;
}