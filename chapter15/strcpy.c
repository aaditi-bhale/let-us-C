//illustrates the use of strcpy

#include <stdio.h>
#include <string.h>
int main () {
    char source[] = "Sayonara", target[20];
    strcpy(target, source);
    printf("Source string = %s\n", source);
    printf("Copied string = %s", target);
    return 0;
}