//2. a more general program that uses scanf() to receive input
#include <stdio.h>
int main () {
    int p, n;
    float r, si;
    printf("Enter values of p, n, r: ");
    scanf("%d %d %f", &p, &n, &r);
    si = p * n* r/100;
    printf("\nSimple Interest= %f", si);
    return 0;
} 
