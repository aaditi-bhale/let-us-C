//binary equivalent using recursion

#include <stdio.h>
int bin (int);
int main () {
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("The binary equivalent is: ");
    bin(num);
    return 0;
}
int bin (int num)
{
    if (num == 0)
    return 0;
    else
    bin (num / 2); //recursively divide the number by 2
    printf("%d", num % 2); //get its remainder for the binary 
}