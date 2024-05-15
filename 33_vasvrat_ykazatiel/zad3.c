#include <stdio.h>
#include <math.h>
float *f(int st){
    static float i =1.0;
    static int exp=1;
    i=pow(i,(double)st/exp);exp=st;
    return &i;
}
int main(){
    *f(2)=25;
    printf("%f\n",*f(5));
    printf("%f\n",*f(4));
    printf("%f\n",*f(3));
}