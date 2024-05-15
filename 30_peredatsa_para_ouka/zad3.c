#include <stdio.h>
void changer(double *x,double *y,double *z){
    double a,b,c;
    a=(*y+*z)/2;
    b=(*x+*z)/2;
    c=(*x+*y)/2;
    *x=a;*y=b;*z=c;
}
int main(){
    double a=1,b=2,c=3;
    changer(&a,&b,&c);
    printf("%lf; %lf; %lf\n",a,b,c);
    return 0;
}