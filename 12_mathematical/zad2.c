#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("Enter a b c : ");scanf("%f %f %f", &a, &b, &c);
    float s = (a+b+c)/2;
    printf("the area is : %f\n", sqrt(s*(s-a)*(s-b)*(s-c)));
    return EXIT_SUCCESS;
}