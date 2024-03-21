#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 10e-10
int main(){
    double x0,y0,x1,y1,x2,y2,x3,y3;
    printf("Enter x0 y0 : ");scanf("%lf %lf",&x0,&y0);
    printf("Enter x1 y1 : ");scanf("%lf %lf",&x1,&y1);
    printf("Enter x2 y2 : ");scanf("%lf %lf",&x2,&y2);
    printf("Enter x3 y3 : ");scanf("%lf %lf",&x3,&y3);
    if ((fabs((x0-x1)*(y1-y2)-(x1-x2)*(y0-y1) < M )) && (fabs((x3-x1)*(y1-y2)-(x1-x2)*(y3-y1) < M) ))
    {
        
        printf("YES\n");
    }else{ printf("NO\n");}
    return EXIT_SUCCESS;
}