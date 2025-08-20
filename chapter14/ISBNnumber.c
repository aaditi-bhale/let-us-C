//report whether the input ISBN number is correct or not
#include <string.h>
#include <stdio.h>
int main () {
    char isbn[15];
    printf("Enter 10 digit ISBN number: ");
    scanf("%s", isbn);
    int i, sum = 0;
    for (i=0; i<10; i++)
    {
        
        int value;
        if (isbn[i] == 'X')
        value = 10;
        else
        value = isbn[i] - '0';
        sum += (10 - i)*isbn[i];
    }
    if (sum % 11 == 0)
    printf("Valid number.");
    else
    printf("Invalid.");
}