#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 1e-6
int main (){
    double y,x,res=1.0;
    int n=1;
    printf("Enter x : ");scanf("%lf",&x);
    y=x;
    while (fabs(y)>M){
        res += y;
        n++;
        y=(y*x)/(n);
    }
    printf("exp(%lf) = %lf\n",x,res);
    
    return EXIT_SUCCESS;
}