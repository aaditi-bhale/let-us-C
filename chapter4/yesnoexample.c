//2.  an example to show the usefulness of the logical operators && and ||

#include <stdio.h>
int main() {
    char gender,married;
    int age;
    printf("Please specify your gender, marital status and age.");
    scanf("%c %c %d", &gender, &married, &age);
    if ((married == 'y') || (married == 'n' && gender == 'm' && age >=30) || (married == 'n' && gender == 'f' && age>=25))
    printf("Yay! Enjoy your insurance.");
    else
    printf("No lol");
    return 0;
}