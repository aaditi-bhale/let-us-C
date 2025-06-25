//3. cp and sp is input, figure out if it's a profit or loss and by how much.

#include <stdio.h>
int main () {
    int cp,sp,loss,profit;
    printf("Enter your cost price and selling price: ");
    scanf("%d %d", &cp, &sp);
    if (cp > sp)
    {
        loss = cp - sp;
        printf("Loss, by %d", loss);
    }
    else if (cp == sp)
        printf("You broke even!");
    else
    {
        profit = sp - cp;
        printf("Profit, by %d", profit);
    }
    
    return 0;
}