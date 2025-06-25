//5. find if an input year is a leap year or not

#include <stdio.h>
int main () {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 400 == 0)
    printf("Yes! It's a leap year.");
    else if (year % 100 == 0)
    printf("No :(, not a leap year.");
    else if (year % 4 == 0)
    printf("Yes! It's a leap year.");
    else 
    printf("No :(, not a leap year.");
    return 0;
}