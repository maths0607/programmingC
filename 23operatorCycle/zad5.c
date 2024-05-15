#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#define R 25
int main(){
    float R;
    printf("Enter the radius : "),scanf("%f",&R);
    R=R/2;
    float x=-R,y=-R;
    printf("%f %f",x,y);
    while(y<=R){
        printf("\n");
        x=-R;
        while (x<=R)
        {
            if(fabs((x*x)+(y*y)- R*R) <=2.0 )
            {
                //printf("%d,%d",x,y);
                printf("*");
            }else{
                printf("  ");
            }        
            x+=0.5;
        }
        y+=0.5;
    }
    printf("\n");
    return EXIT_SUCCESS;
}