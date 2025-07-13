// a positive number is entered, write a program to find the binary equivalent of this number 

//w/o recursion

#include <stdio.h>
int binary(int);
int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n%d", binary(num));
    return 0;
}

int binary (int num)
{
    int rem = 1; 
    int place = 1, bin = 0;
    while (num)
    {
        rem = num % 2;
        num = num / 2;
        bin = bin + (rem * place);
        place = place * 10;
    }
    return (bin);

}