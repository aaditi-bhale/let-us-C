//if an array arr[] contains n elements, write a program to find out if arr[0] = arr[n-1], arr[1] = arr[n-2]
//basically check if arrays are symmetric.
#include<stdio.h>
int main () {
    int n, a, b;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n],i;
    for (i=0; i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
    {
        b = i + 1;
        a = n - b;
        if (arr[i] == arr[a])
        printf("arr[%d] = arr[%d - %d]\n", i, n, b);
    }
return 0;
}