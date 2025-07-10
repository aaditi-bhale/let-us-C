//demonstrates the fundamental relationships in pointers

#include <stdio.h>
int main () {
    int i =3;
    int *j; //pointer declaration
    j = &i; //j stores the address of i
    printf("Address of i = %u\n", &i);
    printf("Address of i = %u\n", j);
    printf("Value of j = %u\n", j);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", *j);
    return 0;
}