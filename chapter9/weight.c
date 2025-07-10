//function that takes in weight and returns the weight in g, tons, pounds

#include <stdio.h>
void weightEq(int *, float *, float *); //use void because we're returning pointers
int main () {
    int gram;
    float tons, pounds;
    weightEq (&gram, &tons, &pounds);
    printf("The equivalent weight in grams is: %d\nIn tons: %0.2f\nIn pounds: %0.2f\n", gram, tons, pounds);
    return 0;
}
void weightEq(int *gram, float *ton, float *pound)
{
    int weight;
    printf("\nEnter weight: ");
    scanf("%d", &weight);
    *gram = weight * 1000;
    *ton = weight / 1000.0;
    *pound = weight / 2.205;
}