//write a function to determine whether an input year is a leap year or not

#include <stdio.h>
int leapYear(int);
int main () {
    int year;
    printf("\nEnter a year: \n");
    scanf("%d", &year);
    if ((leapYear(year)))
    printf("%d is a leap year!\n", year);
    else
    printf("%d is not a leap year.\n", year);
    return 0;
}
int leapYear(int year)
{
    if ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0))
    return 1;
    else 
    return 0;
}