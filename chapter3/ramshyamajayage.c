//6. who's the youngest in ram shyam & ajay based on user input?

#include <stdio.h>
int main() {
    int ram,shyam,ajay;
    printf("Enter the age of ram, shyam and ajay:");
    scanf("%d %d %d", &ram, &shyam, &ajay);
    if (ram<shyam && ram <ajay)
    printf("Ram is the youngest.");
    else if (shyam<ram && shyam<ajay)
    printf("Shyam is the youngest.");
    else if (ajay<ram && ajay<shyam)
    printf("Ajay is the youngest.");
    else
    printf("There is a tie in ages.");
    return 0;
}