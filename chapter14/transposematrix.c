//write a program to obtain the transpose of a 3x5 matrix
//a transpose is obtained by exchanging the row elements with the column elements
#include <stdio.h>
int main () {
    int a[3][5] ={
        {0,1,2,3,4},
        {5,10,15,20,25},
        {6,12,18,24,30}
    };
    int i,j;
    int mat2[5][3];
    for (i=0;i<3;i++) {
        for(j=0;j<5;j++){
            mat2[j][i] = a[i][j];
        }
    }
    //transposed array 
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}