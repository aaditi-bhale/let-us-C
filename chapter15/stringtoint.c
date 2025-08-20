//convert a string "124" to 124
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
    char str[10];
    int num=0,i;
    printf("Enter a number: ");
    scanf("%s", &str);
    for (i=0; str[i] != '\0'; i++)
    {
        if (str[i] >= 48 && str[i] <=57) //checks if the user input is a digit (ascii codes: 0 to 9 are 48 and 57)
        {
            num = num * 10 + (str[i] - 48);
        }
        else 
        {
            printf("Not a valid string.");
            return 1;
        }
    }
    printf("The number is %d\n", num);
    return 0;
}