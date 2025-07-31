//25 numbers are entered into an array. write a program to find out how many are positive, negative, even and odd.

#include <stdio.h>
int main () {
    int arr[25];
    int pos = 0, i,div=0, neg=0, nondiv = 0;
    printf("Enter elements into the array: ");
    for (i=0; i<=24; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0; i<=24; i++)
    {
        if (arr[i] > 0)
        pos++;
        else
        neg++;
    }
    for (i = 0; i<=24; i++)
    {
        if (arr[i] % 2 == 0)
        div++;
        else
        nondiv++;
    }
    printf("\nThere are %d positive numbers, %d negative numbers, %d even numbers and %d odd numbers.", pos, neg, div, nondiv);
    return 0;
}
