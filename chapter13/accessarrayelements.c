//access array elements using pointers
/*  1. array elements are always stored in contiguous memory locations.
    2. a pointer when incremented points to the next location of its type
*/

#include<stdio.h>
int main () {
    int num[] = {24, 34, 12, 44, 56, 17};
    int i, *ptr;
    ptr = &num[0]; //assign address of 0th element
    for (i=0; i<=5; i++)
    {
        printf("address = %u element = %d\n", ptr, *ptr);
        ptr++; //increment pointer to the next integer
    }
    return 0;
}