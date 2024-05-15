#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 1e6
int main(){
    float x;
    printf("Enter the amount : ");scanf("%f",&x);
    printf("number of years : %d\n",( unsigned int )ceil(log(M/x)/log(1.03)));
    return EXIT_SUCCESS;
}