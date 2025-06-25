//6. temperature into fahrenheit
 #include  <stdio.h>
int main () {
    float temp_c, temp_f;
    printf("Enter the temp (in celsius): ");
    scanf("%f", &temp_c);
    temp_f = (temp_c * 9/5) + 32;
    printf("The temperature in Fahrenheit is: %f", temp_f);
    return 0;
} 