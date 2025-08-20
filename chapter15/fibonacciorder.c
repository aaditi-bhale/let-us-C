//generate fibonacci words of order 0 through 5
#include <stdio.h>
#include <string.h>
int main () {
    char str[50];
    char lastbutoneterm[50] = "A";
    char lastterm[50] = "B";
    int i;
        // Print initial two terms
    printf("%s\n", lastbutoneterm); // W0
    printf("%s\n", lastterm);       // W1
    for (i=2; i<=5; i++)
    {
        strcpy(str, lastterm);
        strcat(str, lastbutoneterm);
        printf("%s\n", str);
        strcpy(lastbutoneterm, lastterm);
        strcpy(lastterm, str);
    }
    return 0;
}    