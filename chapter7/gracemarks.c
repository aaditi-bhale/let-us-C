//calculate a students grace marks on a certain logic using the switch statement

#include <stdio.h>
int main () {
    int class, fail;
    printf("Enter your class obtained: \n");
    scanf("%d", &class);
    printf("How many subjects did you fail in?\n");
    scanf("%d", &fail);

    switch (class)
    {
        case 1:
        int grace;
        if (fail > 3)
        {
            grace = 0;
            printf("Sorry, no grace marks are awarded.\n");
        }
        else
        {
            grace = 5 * fail;
            printf("Congratulations! You get %d grace marks.\n", grace);
        }
        break;

        case 2:
        if (fail > 2)
        {
            grace = 0;
            printf("Sorry, no grace marks are awarded.\n");           
        }
        else 
        {
            grace = 4 * fail;
            printf("Congratulations! You get %d grace marks.\n", grace);
        }
        break;

        case 3: 
        if (fail > 1)
        {
            grace = 0;
            printf("Sorry, no grace marks are awarded.\n");
        }
        else
        {
            grace = 5;
            printf("Congratulations! You get %d grace marks.\n", grace);
        }
        break;

        default:
        printf("Uh-oh. What class is that girl?");

    }
    return 0;
}