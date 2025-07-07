#include <stdio.h>

int main () { 
    int num, i = 1, input;
    
    printf("How many numbers would you like to enter? ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    // Read the first number and initialize max and min
    printf("Enter number 1: ");
    scanf("%d", &input);
    int max_value = input;
    int min_value = input;

    while (i < num) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &input);

        if (input > max_value)
            max_value = input;

        if (input < min_value)
            min_value = input;

        i++;
    }

    int range = max_value - min_value;
    printf("\nThe range of %d numbers entered is: %d\n", num, range);

    return 0;
}
