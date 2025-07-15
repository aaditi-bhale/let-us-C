//pragma directive may be used to suppress warnings as well.
//the entire pragma directive is outdated for gcc versions and this whole program will still compile and run w/o warnings.

#include <stdio.h>
#pragma warn +rvl //return value
#pragma warn +par //parameter not used
#pragma warn +rch //unreachable code

int f1 ()
{
    int a = 5;
}
void f2 (int x)
{
    printf("Inside f2\n");
}
int f3()
{
    int x = 6;
    return x;
    x++;
}
int main () {
    f1();
    f2(7);
    f3();
    return 0;
}