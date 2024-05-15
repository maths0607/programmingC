#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 10e-15
int main(){
    double x; int n=0;
    goto entree;
    entree :
        printf("Enter x :");scanf("%lf",&x);

    cycle :
        if (x < -0.25 || x > 0.25){
            goto calcul;
        }
        else{ 
            goto end;
        }
    calcul :
            x=sin(x);
            n++;
            goto cycle;
    end :
    printf("result %d\n",n);
    return 0;
}