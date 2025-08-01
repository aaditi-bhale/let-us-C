//write a program to add two 6x6 matrices
#include <stdio.h>
void addarray(int a[][6], int b[][6]);
int main () {
    int mat1[6][6] = {
        {0,0,0,0,0,0},
        {1,1,1,1,1,1},
        {2,2,2,2,2,2},
        {3,3,3,3,3,3},
        {4,4,4,4,4,4},
        {5,5,5,5,5,5}
    };
    int mat2[6][6] = {
        {0,0,0,0,0,0},
        {1,1,1,1,1,1},
        {2,2,2,2,2,2},
        {3,3,3,3,3,3},
        {4,4,4,4,4,4},
        {5,5,5,5,5,5}
    };
    addarray(mat1,mat2);
    return 0;
}
void addarray(int mat1[6][6], int mat2[6][6])
{
    int i,j;
    int sum[6][6];
    printf("Sum: ");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}