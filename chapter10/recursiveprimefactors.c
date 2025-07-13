//write prime factors of a positive number entered through recursion

#include <stdio.h>
int factors (int, int);
int main () {
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (num <= 0)
    printf("Enter a positive number!\n");
    else
    { printf("The prime factors are:\n");
    factors(num , 2);
    }
    return 0;
}
int factors (int n, int i)
{
    if (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            n = n/i;
        }
        else 
            i++;
        factors (n , i);
    }
}