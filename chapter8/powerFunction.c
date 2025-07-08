//write a function power(a,b) to calculate the power of a raised to b

#include <stdio.h>
#include <math.h>
float power (float a, float b);
int main () 
{
    float a, b, result;
    printf("\nEnter a number: \n");
    scanf("%f", &a);
    printf("What do you want to raise it to? \n");
    scanf("%f", &b);
    result = power (a,b);
    printf("%0.2f raised to %0.2f is %0.2f.\n", a, b, result);
    return 0;
}
float power (float a, float b)
{
    float result;
    result = pow(a,b);
    return (result);
}