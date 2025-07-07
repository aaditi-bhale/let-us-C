//1. write a problem to print all the ascii values and their equivalent characters using a while loop

#include <stdio.h>
int main () {
    int i = 0;
    
    while(i <= 255)
    {
        printf("%d is %c\n", i, i);
        i++; //PLEASE INCREMENT IT AFTER THE LOOP IS OVER
    }
    return 0;
}