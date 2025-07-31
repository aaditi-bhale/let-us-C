//simple program to calculate the average marks obtained by 30 students using arrays
#include <stdio.h>
int main () {
    int avg, sum = 0;
    int i;
    int marks[3]; //array declaration
    for (i = 0; i <= 2; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]); //store data in array

    }
    for (i = 0; i <= 2; i++)
        sum = sum + marks[i]; //read data from array
        avg = sum/3;
        printf("\nAverage = %d\n", avg);
        printf("sum: %d\n", sum);
        return 0;

}