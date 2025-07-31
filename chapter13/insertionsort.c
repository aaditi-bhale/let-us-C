//implement the insertion sort algorithm shown on a set of 25 numbers

#include <stdio.h>
void insertionsort(int arr[], int length);
int main () {
    int arr[25] = {1, 2, 3, 4, 5, 6, 7, 8, 25, 24, 23, 22, 21, 20, 9, 10, 11, 12, 15, 14, 13, 16, 18, 17, 19};
    int i;
    insertionsort(arr, 25);
    for (i = 0; i<25; i++)
    printf("arr[%d] = %d\n", i, arr[i]);
    return 0;
}

void insertionsort(int arr[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int key = arr[i];
        int j = i - 1;

         while (j >= 0 && arr[j] > key)
         {
            arr[j + 1] = arr[j];
            j =  j - 1;
         }
        arr[j + 1] = key;
    }
}