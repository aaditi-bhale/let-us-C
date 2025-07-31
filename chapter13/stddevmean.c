//for the given data calculate the std deviation and the mean
#include <stdio.h>
#include <math.h>
int main () {
    int data[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int length = sizeof(data)/sizeof(data[0]);
    float mean, stdev;
    int sum=0,i=0;
    for (; i<length;i++)
    {
        sum += data[i];
    }
    mean = (float)sum/length;
    //std deviation
    float sumsqDiff = 0;
    for (; i<length;i++)
    {
        float diff = data[i] - mean;
        sumsqDiff = sumsqDiff + pow(diff, 2);
    }
    stdev = sqrt(sumsqDiff/length);

    printf("The mean is %0.2f and the standard deviation is %0.2f.\n", mean, stdev);
    return 0;
}