//3. notes of six denominations, an amount N is entered, compute the smallest number of notes that combine to give N

#include <stdio.h>
int main() {
    int N, one,two,five,ten,fifty,hundred,total;
    printf("Enter the amount: ");
    scanf("%d", &N);
    //hundred notes
    hundred = N/100;
    N = N % 100;
    //fifty notes
    fifty = N/50;
    N = N % 50;
    //ten notes
    ten = N/10;
    N = N % 10;
    //five notes
    five = N/5;
    N = N % 5;
    //2
    two = N / 2;
    N = N % 2;
    //1
    one = N / 1;
    N = N % 1;
    total = hundred + fifty + ten + five + two + one;
    printf("The notes you need are: %d\n", total);
    return 0;
}