//a positive integer is entered through the keyboard. write a function to obtain the prime factors of this number.

//include edge case of a negative number input

#include <stdio.h>
#include <stdlib.h>
int prime (int);
int main () {
    int num;
    printf("\nEnter a number to find its prime factors: \n");
    scanf("%d", &num);
    if (num <= 1) // edge case
    printf("Enter a number greater than 1.\n");
    else
    prime(num);
    return 0;
}
int prime (int num)
{
    while (num % 2 == 0)
    {
    printf("2 ");
    num = num/2;
    }

    int i;
    for (i = 3; i <= num; i+= 2)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
    }
    if (num > 2)
    {
        printf("%d ", num);
    }

}