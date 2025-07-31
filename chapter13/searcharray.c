//an array contains 10 integers. receive a number to be searched in the array as input, and display the number of times it occurs in the array

#include <stdio.h>
int main () {
    int num[10] = {7, 3, 5, 4, 6, 7, 2, 4, 5, 7};
    int n,i,count;
    printf("The array is: \n");
    for (i=0;i<=9;i++){ 
    printf("%d", num[i]);
    }
    printf("\nEnter the element to search: ");
    scanf("%d", &n);
    count = 0;
    for (i =0; i<=9; i++)
    {
        if (num[i] == n)
        count++;
    }
    printf("\nThe number %d is found %d times in the array.", n, count);
    return 0;
}