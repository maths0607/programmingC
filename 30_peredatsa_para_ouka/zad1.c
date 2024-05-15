#include <stdio.h>
void power(double n, double *n_2,double *n_3,double *n_4){
    *n_2=n*n;
    *n_3=*n_2*n;
    *n_4=*n_3*n;
    
}
int main(){
    double x,x_2,x_3,x_4;
    printf("Enter number : ");scanf("%lf",&x);
    power(x,&x_2,&x_3,&x_4);
    printf("%lf ;%lf ;%lf ;%lf\n",x,x_2,x_3,x_4);

    return 0;
}