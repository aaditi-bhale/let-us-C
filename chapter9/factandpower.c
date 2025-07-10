//write a function that calculates power of one number raised to another and factorial value in one call

#include <stdio.h>
void powfact (float, int, int, float *, int *);
int main () {
    int b, c;
    int fact;
    float a, power;
    printf("\nEnter the numbers you want exponentiated: ");
    scanf("%f %d", &a, &b);
    printf("\nEnter the number you want to find a factorial of: ");
    scanf("%d", &c);
    powfact(a, b, c, &power, &fact);
    printf("\nThe power is %0.2f\nThe factorial is %d\n", power, fact);
    return 0;
}

void powfact(float x, int y, int z, float *power, int *fact)
{
    int i = 1;
    float res = 1;
    for (;i <= y; i++)
    {
        res = res * x;
    }
        *power = res;

    int number = 1;
    for (i = 1; i <= z; i++)
    {
        number = number * i;
        *fact = number;
    }
}