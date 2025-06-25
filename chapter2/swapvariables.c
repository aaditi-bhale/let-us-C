#include <stdio.h>
int main () {
    int c,d,temp;
    printf("Enter C and D: ");
    scanf("%d %d", &c, &d);
    temp = c;
    c = d;
    d = temp;
    printf("The new values of C and D are: %d and %d", c,d);
    return 0;
}