//alice in wonder land is fed to a scanf statement
#include <stdio.h>
int main () {
    char str1[10], str2[10], str3[10], str4[10];
    printf("Enter your statements: ");
    scanf("%s%s%s%s", str1, str2, str3, str4);
    printf("%s\t", str1);
    printf("%s\t", str2);
    printf("%s\t", str3);
    printf("%s\t", str4);
    return 0;
}