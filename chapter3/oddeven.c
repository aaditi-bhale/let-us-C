//4. find out if user input number is odd or even

#include <stdio.h>
int main () {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    printf("The number is even.");
    else if (num % 2 != 0)
    printf("The number is odd.");
    return 0;
}