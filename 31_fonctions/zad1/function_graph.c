#include <stdio.h>
#include <math.h>
#include "function_f.h"
#define Y 50

// Définition de la fonction dessinerCosinus
void graph() {
    float x, y;
    for (y = Y; y > -Y; y+=-0.5) {
        for (x = -15.0; x < 15.0; x+=0.5) {
            int va = f(x);
            if (x==0 || y==0){
                printf("+");
            }else if (fabs(y-va)<0.0005)
            {
                printf("*");
            }else{
                printf(" ");
            }            
        }
        printf("\n");
    }
}




