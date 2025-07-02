//3. another program to determine if a year is a leap year, using logical operators

#include <stdio.h>
int main () {
    int year;
    printf("Enter your year:) :");
    scanf("%d", &year);
    if ((year % 4 == 0) || (year % 400 == 0))
    printf("It's a leap.");
    else
    printf("nope.");
    return 0;
}