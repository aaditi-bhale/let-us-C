//get the sum of first 25 natural (!!) numbers

#include <stdio.h>
int sum(int);
int main () {
    int result = sum (25);
    printf("Sum = %d\n", result);
    return 0;
}
int sum (int n)
{
    if (n == 0)
    return 0;
    else
    return n + sum (n-1);
}