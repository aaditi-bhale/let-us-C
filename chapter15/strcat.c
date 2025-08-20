//illustrates the use of strcat
#include <stdio.h>
#include <string.h>
int main () {
    char source[] = "Folks!", target[30] = "Hello";
    strcat(target, source);
    printf("Source: %s\n", source);
    printf("Concatenated: %s", target);
    return 0;
}