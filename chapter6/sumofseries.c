//find the sum of the first seven terms of the series 1/1! + 2/2! + 3/3!...

#include <stdio.h>
int main () {
    float sum = 0;
    int i;
    for (i = 1; i <=7; i++)
    {
        float fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact *j;
        }
        sum = sum + i/fact;
    }
    printf("Sum of series: %f", sum);
    return 0;
}