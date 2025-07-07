//let the user enter numbers till they wish. at the end it should display the count of
//positive, negative and zeros entered

#include <stdio.h>
int main (){
    int a;
    printf("How many numbers would you like to enter?");
    scanf("%d", &a);
    int positive = 0, negative = 0, zero = 0;

    int i = 0;
    while (i <= a) 
    {
        int number;
        printf("\nEnter your number: ");
        scanf("%d", &number);

        if (number == 0)
        {
            zero++;
        }
        else if (number > 0)
        {
            positive++;
        }
        else if (number < 0)
        {
            negative++;
        }
        i++;
    }

    printf("\n\n Positive numbers: %d", positive);
    printf("\nNegative numbers: %d", negative);
    printf("\nZeroes: %d", zero);

    return 0;
}