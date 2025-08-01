//check if a square matrix is symmetric
#include <stdio.h>
int main () {
    int isSymmetric=1; //assume symmetry
    int i,j;
    int arr[2][2] = {
                    {1,2},
                    {2,1}
                    };
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){

            if (arr[i][j] != arr[j][i]) { 
            isSymmetric=0;
            break;
            }
        }
    }
    if(isSymmetric == 1)
    printf("Symmetric array.\n");
    else
    printf("Not symmetric.\n");
    return 0;
}