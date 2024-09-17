#include <stdio.h>
#include <math.h>
#define M 0.000001
int main(){
    FILE *fp = fopen("f.txt","w+");
    if(fp == NULL) return 1;
    fprintf(fp,"x \tsin(x)\n");
    for(float i = 0.0;fabs(i-1.0-0.1)>M;i+=0.1){
        fprintf(fp,"%.1f\t%.3f\n",i,sin(i));
    }
    fclose(fp);
    return 0;
}