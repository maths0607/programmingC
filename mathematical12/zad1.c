#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float x1,y1,x0,y0;
    printf("Put (x0;y0) :");scanf("%f %f", &x0, &y0);
    printf("Put (x1;y1) :");scanf("%f %f", &x1, &y1);
    printf("The equation is %fx-(%f)y=%f",y1-y0,x1-x0,x0*(y1-y0)-y0*(x1-x0));
    return EXIT_SUCCESS;
}