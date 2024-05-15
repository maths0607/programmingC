#include <stdio.h>
void changer(double *x,double *y,double *z){
    double a= *x;
    *x=*y;
    *y=*z;
    *z=a;
}
int main(){
    double a=1,b=2,c=3;
    changer(&a,&b,&c);
    printf("%lf; %lf; %lf\n",a,b,c);
    return 0;
}