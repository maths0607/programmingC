#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 10e-10
int  main(){
    double a2,b2,c2,a1,b1,c1;
    printf("Enter data 1st triangle : " );scanf("%lf %lf %lf",&a2,&b2,&c2);
    printf("Enter data 2nd triangle : " );scanf("%lf %lf %lf",&a1,&b1,&c1);
    if ((fabs(a1 / a2 - b1 / b2) < M && fabs(b1 / b2 - c1 / c2) < M) ||
        (fabs(a1 / a2 - b1 / c2) < M && fabs(b1 / b2 - c1 / a2) < M) ||
        (fabs(a1 / a2 - b1 / a2) < M && fabs(b1 / b2 - c1 / b2) < M)) {
        printf("YES\n");
    } else {
        printf("NON\n");
    }
    return EXIT_SUCCESS;
}