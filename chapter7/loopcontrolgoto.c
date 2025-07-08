//a program in favour of using the goto function

#include <stdio.h>
int main () {
    int i,j,k;
    for (i=0;i<=3;i++)
    {
        for (j=0;j<=3;j++)
        {
            for (k=0;k<=3;k++)
            {
                if (i==3 && j == 3 && k ==3)
                goto out; 
                //instead of using goto, i can just use a printf() function.
                else
                printf("%d %d %d\n", i,j,k);
            }
        }
    }
    out: 
    printf("\nOut of the loops at last!");
    return 0;
}