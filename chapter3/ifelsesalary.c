//there are conditions to ramesh's salary, find his gross salary

#include <stdio.h>
int main () {
    int basesal, hra, da, gross;
    printf("Enter your base salary: ");
    scanf("%d", &basesal);
    if (basesal < 1500) 
    {
            hra = 0.1 * basesal;
            da  = 0.9 * basesal;
    }
    else  
    {
        hra = 500;
        da = 0.98 * basesal;
    }
    gross = basesal + hra + da;
    printf("Your gross salary is: %d", gross);
    return 0;
}