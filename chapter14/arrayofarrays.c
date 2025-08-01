//demo: 2d array is a array of arrays
// #include <stdio.h>
// int main () {
//     int s[4][2] = {{1234, 56}, {1212, 33}, {1434, 80}, {1312, 78}};
//     int i;
//     for(i=0; i<4;i++)
//     {
//         printf("Address of %dth element of the 1D array = %u\n", i, s[i]);
//     }
//     return 0;
// }

//using pointers
#include <stdio.h>
int main () {
    int s[4][2] = {{1234, 56}, {1212, 33}, {1434,80}, {1312, 78}};
    int i,j;
    for (i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", *(*(s +i) + j));
        }
        printf("\n");
    }
    return 0;
}