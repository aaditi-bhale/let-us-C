//2. a five digit number is input through the keyboard, reverse it.

#include <stdio.h>

int main () {
    int num, reversed;
    int d1,d2,d3,d4,d5;

    //step 1: input the number
    printf("Enter the 5 digit number: ");
    scanf("%d", &num);

    //step 2: extract digits manually
    d1 = num % 10; //this always gives the last digit.
    d2 = (num / 10) % 10; // the /10 removes the last digit, and the % 10 returns the actual digit
    d3 = (num / 100) % 10;
    d4 = (num / 1000) % 10;
    d5 = (num / 10000);

    //rebuild it by applying the units weightage

    reversed = d1* 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;
    printf("The reversed number is: %d", reversed);
    return 0;
    
}