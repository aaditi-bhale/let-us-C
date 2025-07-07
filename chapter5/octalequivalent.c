//a program to find the octal equivalent of a number

#include <stdio.h>
#include <math.h>

int main () {
    int number; //decimal number 
    int oct = 0, i=0; //cotal number and loop counter
    printf("Enter the decimal number to convert: ");
    scanf("%d", &number);
    while (number != 0)
    {
        int num; //this holds the remainders
        num = number % 8; //gets the remainder
        oct = oct + num * pow(10,i); //puts it in its correct position
        number = number / 8; //divides the number by 8 to keep the process going
        i++;
    }
    printf("Octal value is: %d", oct);
return 0;
}