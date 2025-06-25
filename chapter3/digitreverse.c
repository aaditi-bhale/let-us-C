//6. reverse the user input digits, then check if they're equal

#include <stdio.h>
int main() {
    int num, d1, d2, d3, d4, d5, rev;
    printf("Enter the number: ");
    scanf("%d", &num);
    d1 = num % 10;
    d2 = (num /10) % 10;
    d3 = (num / 100) % 10;
    d4 = (num / 1000) % 10;
    d5 = (num / 10000) % 10;
    rev = d1*10000 + d2*1000 + d3*100 + d4*10 + d5;
    printf("The reversed number is: %d", rev);
    if (rev == num)
    printf("\nThe numbers are equal :)");
    else 
    printf("\nThe numbers are not equal.");
    return 0;
}