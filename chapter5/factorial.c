//find the factorial of any number entered

#include <stdio.h>
int main () {
    int num,count = 1,fact= 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (count <= num) 
    {
        fact = fact * count;
        count++;
    }
    printf("The factorial is: %d", fact);
    return 0;
}