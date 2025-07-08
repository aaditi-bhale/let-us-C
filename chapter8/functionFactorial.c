//write a function to calculate the factorial of a number

#include <stdio.h>
int fact (int);
int main () {
    int num;
    int factorial;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    factorial = fact (num);
    printf("\nFactorial of %d is %d\n", num, factorial);
    return 0;
}

int fact (int num)
{
    int factorial = 1,i;
    for (i = 1; i <= num; i++)
        factorial = factorial * i;
        return (factorial);
}