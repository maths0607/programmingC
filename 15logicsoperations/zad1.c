#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("Enter a b c : ");scanf("%f %f %f",&a,&b,&c);
    printf("%d\n",(a+b>c)&&(a+c>b)&&(b+c)>a);
    return EXIT_SUCCESS;
}