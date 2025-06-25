//4. five digit number is input, find the sum of its digits.

#include <stdio.h>
int main () {
int num, d1, d2,d3,d4,d5, sum;
printf("Enter your 5 digit number: ");
scanf("%d", &num);
d1 = (num / 10000) % 10;
d2 = (num / 1000) % 10;
d3 = (num / 100) % 10;
d4 = (num / 10) % 10;
d5 = num % 10;

sum = d1 + d2 + d3 + d4 + d5;
printf("The sum of the digits is %d.", sum);
return 0;
}