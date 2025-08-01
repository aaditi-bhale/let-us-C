/*A 2D array is also known as a matrix.
Here is a simple program that stores students roll number and marks obtained side by side
in a matrix.*/

#include <stdio.h>
int main () {
    int stud[4][2]; //stud[row][col]
    int i,j;
    for (i =0; i<=3; i++)
    {
        printf("Enter roll number and marks: ");
        scanf("%d %d", &stud[i][0], &stud[i][1]);
    }
    for (i = 0; i<=3; i++)
    {
        printf("%d %d\n", stud[i][0], stud[i][1]);
    }
    return 0;
}