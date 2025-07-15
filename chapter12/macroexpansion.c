//illustrates macro template and macro expansion

#include <stdio.h>
#define PI 3.1428

int main() {
    float r = 6.25, area;
    area = PI * r * r;
    printf("Area = %0.2f", area);
    return 0;
}