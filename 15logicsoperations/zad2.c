#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float x1,y1,x0,y0,x2,y2;
    printf("Put (x0;y0) :");scanf("%f %f", &x0, &y0);
    printf("Put (x1;y1) :");scanf("%f %f", &x1, &y1);
    printf("Put (x2;y2) :");scanf("%f %f", &x2, &y2);
    printf("%d\n",fabs((x1-x0)*(y2-y1) - (x2-x1)*(y1-y0)))<0.00001;
    return EXIT_SUCCESS;
}
