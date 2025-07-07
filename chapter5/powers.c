//5.3 two numbers are input, find the value of one number raised to the other

#include <stdio.h>
int main () {
    float x,power;//x is the first number
    int y,i;      //y is the second number
    printf("Enter two numbers: ");
    scanf("%f %d", &x, &y);
    power = i =1;
    while(i<=y) //i and power and y are the same, y should be greater than 1
    {
        power = power * x;
        i++;
    }
    printf("The number is: %0.2f", power);
return 0;

}    
