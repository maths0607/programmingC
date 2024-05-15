#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 10e-15
#define CHANGE(x, y) { int temp = x; x = y; y = temp; }
int  main(){
    double a2,b2,c2,a1,b1,c1;
    printf("Enter data 1st triangle : " );scanf("%lf %lf %lf",&a2,&b2,&c2);
    printf("Enter data 2nd triangle : " );scanf("%lf %lf %lf",&a1,&b1,&c1);
    if (a1 > b1) CHANGE(a1, b1);if (b1 > c1) CHANGE(b1, c1);if (a1 > b1) CHANGE(a1, b1);
    if (a2 > b2) CHANGE(a2, b2);if (b2 > c2) CHANGE(b2, c2);if (a2 > b2) CHANGE(a2, b2);

    if (fabs(a1 / a2 - b1 / b2) < M && fabs(b1 / b2 - c1 / c2) < M) {
        printf("YES\n");
    } else {
        printf("NON\n");
    }
    return EXIT_SUCCESS;
}