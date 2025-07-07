//2. write a program to print all the armstrong numbers between 1 to  500

#include <stdio.h>
int main () {
    int i=1, d1, d2, d3, cube;
    while (i <= 500)
    {
        d1= (i/100) % 10;
        d2= (i/10) % 10;
        d3= i % 10;
        cube = (d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3);
        if (cube == i)
        printf("%d\n", i);
        i++;
    }
    return 0;
}