//5. aggregate marks and percentage
// fixed error in line 87: percent calculation needs to happen as a float number as int division will return 0 (total is an int) 
 #include <stdio.h>
int main() {
    int math, english, science, social, marathi;
    int total;
    float percent;
    printf("Please enter your marks in math: ");
    scanf("%d", &math);
    printf("\nPlease enter your marks in english: ");
    scanf("%d", &english);
    printf("\nPlease enter your marks in science: ");
    scanf("%d", &science);
    printf("\nPlease enter your marks in social: ");
    scanf("%d", &social);
    printf("\nPlease enter your marks in marathi: ");
    scanf("%d", &marathi);
    total = math + english + science + social + marathi;
    percent = ((float)total/500) * 100; 
    printf("\nYour total marks are: %d", total);
    printf("\nYour percentage is: %f", percent);
    return 0;
    
} 