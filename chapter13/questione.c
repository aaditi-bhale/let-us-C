//perform  a set of 4 given tasks
#include <stdio.h>
int modify(int arr[10]);
int main () {
    //initialise an int array of 10 elements
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //pass the entire array to modify()
    modify(arr);
    printf("The new elements are: ");
    for (int i =0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
//multiply each element by 3
int modify(int arr[10])
{
    int i =0;
    for (;i<10;i++)
    {
        arr[i] = 3 * arr[i];
    }
}