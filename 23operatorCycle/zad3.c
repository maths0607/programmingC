#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define CHANGE(x, y) { int temp = x; x = y; y = temp; }
int main (){
    int n=0;
    double a,b,x;
    printf(" Enter number (%d) : ",(++n));scanf("%lf",&a);
    printf(" Enter number (%d) : ",(++n));scanf("%lf",&b);
    if (a<b) {CHANGE(a,b);}
    while (n<10){
        printf(" Enter number (%d) ",++n);scanf("%lf",&x);
        if (x>b) {b=x;}
        if (a<b) {CHANGE(a,b);}
    }
    printf(" the Two highest numbers are : %lf ; %lf",a,b);
    return EXIT_SUCCESS;
}