#include <stdio.h>
#include <stdlib.h>
int main(){
    double a = 0, b = 0, c = 0;
    printf(" a : "); scanf("%f",&a);
    printf(" b : "); scanf("%f",&b);
    printf(" c : "); scanf("%f",&c);
    printf("%f\n",((a*b+7*c)*(a*b+7*c)*(a*b+7*c)-(a*a+b*b+c*c))/(b-a*c-a*(b+c)));
    return EXIT_SUCCESS;
}