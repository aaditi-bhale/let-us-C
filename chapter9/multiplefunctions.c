//3rd question
//one function: computes a distance b/w two points
//second function: computes the area of a triangle abc
//third function: returns 1 if points lie inside the triangle abc

#include <stdio.h>
#include <math.h>
void distance(float *);
void area (float *);
void points();
int main () {



}

void distance (float *dist)
{
    float distance;
    float x1, x2, y1, y2;
    printf("Enter the coordinates x1 and x2: ");
    scanf("%f %f", &x1, &x2);
    printf("\nEnter the coordinates y1 and y2: ");
    scanf("%f %f", &y1, &y2);
    distance = sqrt (((x2) - (x1)) * ((x2) - (x1)) + ((y2)- (y1) * (y2)- (y1)));
    distance = *dist;
}
void area (float *area)
{
    float x1,y1,x2,y2,x3,y3;
    
}