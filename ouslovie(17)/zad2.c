#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    double a,b,c,d;
    printf("Input the numbers: "); scanf("%lf %lf %lf", &a, &b, &c);
    d=b*b -4*a*c ;
    printf("number of solutions %d\n", ( d>0.0 ? 2 : ( d<0.0? 0 : 1)));
    
    return EXIT_SUCCESS;
}