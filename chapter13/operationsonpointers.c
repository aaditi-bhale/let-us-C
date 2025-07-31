//the following operations can be performed on pointers:
/* 1. addition of a number to a pointer
   2. subtraction of a number from a pointer
   3. subtraction of one pointer from another
   4. comparison of two pointer variables.
*/

#include <stdio.h>
int main () {
    int arr[] = {10, 20, 30, 45, 67, 56, 74};
    int i = 4, *j, *k, *x, *y;
    j = &i;
    j += 9; //pointer + number
    k = &i; 
    k -= 3; //pointer - number
    x = &arr[1];
    y = &arr[5];
    printf("%d\n", y-x); //When you subtract two pointers pointing into the same array, you get the number of elements between them.
    j = &arr[4];
    k = (arr + 4); //arr is the base address, so (arr + 4) moves 4 steps forward to arr[4]
    if (j == k)
        printf("The two pointers point to the same location!\n");
    else
        printf("The two pointers point to different locations!\n");
    return 0;
}