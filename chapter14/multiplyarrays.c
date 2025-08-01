//write a program to multiply any two 3x3 matrices
#include <stdio.h>
void multiplyarrays(int a[][3], int b[][3]);
int main () {
    int mat1[3][3] = {
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };
    int mat2[3][3] = {
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };
    multiplyarrays(mat1,mat2);
    return 0;
}
void multiplyarrays(int mat1[][3], int mat2[][3]){
    int i,j,k;
    int ans[3][3] = {0};
    printf("Multiplication yields: \n");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                ans[i][j] += mat1[i][k]*mat2[k][j];
            }
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }
}