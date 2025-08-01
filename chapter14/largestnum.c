//write a program to pick up the largest number in a 5x5 matrix
#include <stdio.h>
int main () {
    int a[5][5] = {
        {0,1,2,3,4},
        {-1,-2,-3,-4,-5},
        {10,20,30,40,50},
        {5,15,25,35,45},
        {6,12,18,24,36}
    };
    int i,j,big;
    big = a[0][0];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if (big < a[i][j])
            big = a[i][j];
        }
    }
    printf("The biggest value is: %d", big);
    return 0;
}