//3.program to calculate Ramesh's gross salary
 #include <stdio.h>
int main () {
    int sal, dAllow, hAllow, gross;
    printf("Enter your base salary: ");
    scanf("%d", &sal);
    dAllow = 0.4 * sal;
    printf("\nYour dearness allowance is: %d", dAllow);
    hAllow = 0.2 * sal;
    printf("\nYour house rent allowance is: %d", hAllow);
    gross = sal + dAllow + hAllow;
    printf("\nRamesh, your salary is: %d", gross);
    return 0;
} 