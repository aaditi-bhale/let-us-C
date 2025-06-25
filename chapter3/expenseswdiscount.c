//1. if item purchased >1000, 10% discount is applied. calculate total expenses.

#include <stdio.h>
int main () {
    int qty, dis;
    float rate, total;
    printf("Enter quantity and rate: ");
    scanf("%d %f", &qty, &rate);
    if ( qty > 1000)
        dis = 10;
    else 
        dis  = 0;
total = (qty * rate) - (qty * rate * dis/100);
    printf("The total discount on this bill is: %d", dis);
    printf("\nThe total expense is: %f", total);
    return 0;
}