//write a program using pointers to find the smallest number in an array of 25 integers

#include<stdio.h>
int main () {
    int arr[25] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -2, 12, 13, 14, 15, 16, 17, 19, -3, 0, 2, 4, 6};
    int i;
    int *p = arr; 
    int *end = arr + 25;
    int smallest = *p;
    while (p < end)
    {
        if (*p < smallest)
        smallest = *p;
        p++;
    }
    printf("The smallest value is : %d", smallest);
    return 0;
}