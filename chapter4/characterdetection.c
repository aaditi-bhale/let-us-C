//4.2 detect whether the char entered is a lowercase,uppercase,a number or a special char

#include <stdio.h>
int main () {
    char in;
    printf("Enter the character: ");
    scanf("%c", &in);
    if (in >= 65 && in<=90)
    printf("It's a capital!");
    else if (in>=97 && in<=122)
    printf("It's a lowercase letter.");
    else if (in>=48 && in<=57)
    printf("It's a number.");
    else
    printf("Something special. It's a special character.");
    return 0;
}