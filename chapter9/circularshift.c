//given three variables x,y and z, write a function to circularly shift their values to the right. call the function with a,b,c

#include <stdio.h>
int circularshift (int *, int *, int *);
int main () {
    int x = 5;
    int y = 8;
    int z = 10;
    circularshift(&x, &y, &z);
    printf("\nThe new values are: %d %d %d\n", x, y, z);
    return 0;
}
int circularshift (int *a, int *b, int *c)
{
    int t;
    t = *a;
    *a = *c;
    *c = *b;
    *b = t;
}