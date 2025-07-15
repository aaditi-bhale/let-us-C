//problem 12.1
//test if a character is lowercase
//test if it's uppercase
//test if a character is an alphabet
//obtain the bigger of two numbers

#include <stdio.h>
#define ISUPPER(x)(x>=65 && x<=90 ? 1 : 0)
#define ISLOWER(x)(x>= 97 && x<=122 ? 1 : 0)
#define ISALPHA(x)(ISUPPER(x) || ISLOWER(x))
#define BIGGER(x, y) (x > y ? x : y)
int main () {
    char ch;
    int d, a, b;
    printf("Enter any alphabet/character: \n");
    scanf("%c", &ch);
    if (ISUPPER(ch) == 1)
    printf("You entered a capital letter!\n");
    else if (ISLOWER(ch) == 1)
    printf("You entered a lowercase letter!\n");
    else if (ISALPHA(ch) != 1)
    printf("You entered a special character.\n");
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    d = BIGGER(a,b);
    printf("\nThe bigger number is: %d", d);
    return 0;
}
