//implement relationships b/w variables as shown in the diagram in the textbook

#include <stdio.h>
int main () {
    int i = 3.14;
    int *k = &i;
    int **j = &k;
    //all the addresses
    printf("Address of i: %p\n", &i);
    printf("Address of i: %p\n", k);
    printf("Address of k: %p\n", j);
    printf("Address of j: %p\n", &j);
    //all the values
    printf("Value of i = %d\n", i);
    printf("Value of i: %d\n", *(&i));
    printf("Value of i: %d\n", **(&k));
}