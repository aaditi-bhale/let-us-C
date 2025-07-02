//1. (example) write a program to calculate a student's division based on her marks

#include <stdio.h>
int main() {
    int math,sci,eng,hindi,social;
    float total, percent;
    printf("Enter your marks in all the five subjects: ");
    scanf("%d %d %d %d %d", &math, &sci, &eng, &hindi, &social);
    total = math + sci + eng + hindi + social;
    percent = (total/500) * 100;
    if (percent >= 60)
    printf("Congratulations! You're in the first division.");
    else if (percent>=50 && percent<=59)
    printf("Congratulations! You're in the second division.");
    else if (percent>=40 && percent<=49)
    printf("Nice. You're in the third division.");
    else
    printf("Sorry! You've failed.");
    return 0;
}