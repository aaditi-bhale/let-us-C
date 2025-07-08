// a menu driven program which has the following options:
// a) factorial b) prime or not c) odd or even d)exit

#include <stdio.h>
#include <stdlib.h>

int main () {
    int fact, i, num;
    char option;
    while (1) {
    printf("\nEnter what you would like\n:");
    printf("[f = factorial, p = prime, o = odd or even, e =exit]: ");
    scanf(" %c", &option);
    switch (option) {
        case 'f':
        printf("Enter the number you'd like to factorise: ");
        scanf("%d", &num);
        fact = 1;
        for (i = 1; i<=num; i++)
        fact = fact * i;
        printf("\nThe number is: %d", fact);
        break;

        case 'p':
        printf("Enter the number to be checked: ");
        scanf("%d", &num);
        for (i = 2; i <=num; i++)
        {
            if (num % i == 0)
            { printf("\nNot a prime.");
                break; }
            if (num == i)
                printf("\nPrime number.");
        }
        break;

        case 'o':
        printf("Enter the number you'd like to check: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        printf("Even!\n");
        else 
        printf("Odd.\n");
        break;

        case 'e':
        exit (0);

        default: 
        printf("Invalid character.\n");
    }
}

}