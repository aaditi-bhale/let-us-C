//a user input based game where the computer always wins. the user can pick between 1,2,3 or 4 matchsticks. the last one to pick up
//a matchstick loses.

#include <stdio.h>
int main () {
    int totalMatchsticks = 21;
    printf("Welcome to the Matchsticks Game. Try to beat the computer!\n");
    printf("The total number of matchsticks are %d.", totalMatchsticks);


    while(1) 
    {
        int number;
        printf("\nHow many matchsticks do you pick? (between 1 to 4): ");
        scanf("%d", &number);

        if(number >4 || number < 1){
            continue;
        }

        int computer;
        printf("\nComputer's turn.");
        computer = 5 - number;
        printf("\nThe computer picks %d.", computer);

        totalMatchsticks = totalMatchsticks - 5;

        printf("\nThe total number of matchsticks are %d.", totalMatchsticks);

        if (totalMatchsticks == 1) {
            printf("\n\n\nFailure. ");
            break;
        }
        
    }
    return 0;
}