//write a recursive program to obtain the first 25 numbers of a sequence

#include <stdio.h>
int fibo (int);
int main () {
    int terms = 25, i, n = 0;
    for (i =1; i <= terms; i++) 
    {
        printf("%d\t", fibo(n));
        n++;
    }
    return 0;
}

int fibo (int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    return (fibo (n-1) + fibo (n-2));
}