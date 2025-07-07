//write a program to print all numbers that are prime till 300

#include <stdio.h>
int main () {
    int i, n =1;
    printf("The prime numbers till 300 are: ");
    for (n = 1; n < 300; n++)
    {
        i = 2;
        for (; i < n; i++)
        {
            if (n % i == 0)
            {
                break;

            }
        }
        if (n == i)
        printf("%d\n", n);
    }
    return 0;
}