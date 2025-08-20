//a credit card number is entered, this program checks whether it's valid or not
#include <stdio.h>
#include <string.h>
int main () {
    char credit[20];
    int i=0;
    int sum=0;
    printf("Enter your credit card number: ");
    scanf("%s", credit);
    int len = strlen(credit);
    for (i = 0; i< len; i++)
    {
        int n = credit[i] - '0';
        if ((len - i) % 2 == 0)
        {
            n = n*2;
            if (n > 9)
            {
                n = n - 9;
            }
            sum = sum + n;
        }
        else 
        sum += n;
    }
        if(sum % 10 == 0)
        {
            printf("Yes, a valid credit card number.\n");
        }
        else
        printf("Not valid.\n");

}