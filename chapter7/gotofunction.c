//program that illustrates the working of the goto() function

#include <stdio.h>
#include <stdlib.h>
int main() {
    int goals;
    printf("Enter the number of goals scored against India.\n");
    scanf("%d", &goals);

    if (goals <=5)
    goto sos ;
    else
    {
        printf("About time soccer players learned C\n");
        printf("And said goodbye to soccer\n");
        exit (1); //terminates the code
    }
    sos :
    printf("To err is human.\n");
    return 0; 
}