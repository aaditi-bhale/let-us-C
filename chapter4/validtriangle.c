//4.3 check if the triangle is valid  when the length of its three sides are input through the keyboard

#include <stdio.h>
int main(){
    int a,b,c,sum,largeside;
    printf("Enter the length of the sides: ");
    scanf("%d %d %d", &a,&b,&c);
    //identify the largest side
    if (a > b && a > c) {
        largeside = a;
        sum = b + c; }  
    else if (b > a && b > c) {
        largeside = b;
        sum = a + c; }
    else if (c > a && c > b) {
        largeside = c;
        sum = a + b; }
    //check if it's valid
    if (sum > largeside)
    printf("Yes, valid.");
    else
    printf("Invalid triangle.");
    return 0;
}