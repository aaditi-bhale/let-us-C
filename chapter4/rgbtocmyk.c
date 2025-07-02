//q2. if colours are input R,G,B turn them into CYMK.

#include <stdio.h>
int main () { 
    int R, G, B;
    float white, cyan, magenta, yellow, black, r_norm, g_norm, b_norm;
    printf("Enter the R, G, B: ");
    scanf("%d %d %d", &R, &G, &B);
    //normalise the RGB values to a 0-1 range;
    r_norm = R/255.0;
    g_norm = G/255.0;
    b_norm = B/255.0;
    //find the largest
    white = r_norm;
    if (g_norm > white)
    white = g_norm;
    if (b_norm > white)
    white = b_norm;

    //special case:black
    if (R ==0 &&  G==0&&  B==0){
        cyan =0;
        magenta = 0;
        yellow = 0;
        black = 1;
    }
    else{ 
        cyan = (white - r_norm) / white;
        magenta = (white - g_norm) / white;
        yellow = (white - b_norm) / white;
        black = 1 - white;
    }

    printf("The CMYK scale: %f %f %f %f", cyan, magenta, yellow, black);
    return 0;
}