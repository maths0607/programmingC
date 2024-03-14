#include <stdio.h>
#include <stdlib.h>
int main (){
    double a,b,c,minab;
    printf("Input the numbers: "); scanf("%lf %lf %lf", &a, &b, &c);
    minab= (a > b ? b : a);
    printf("Minimum=%lf\n", (c > minab ? minab : c));
    
    return EXIT_SUCCESS;
}