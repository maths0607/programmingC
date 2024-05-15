#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 10e-10
//#define are_align(x00,y00,x11,y11,x22,y22)(fabs(((x00)-(x11))*((y11)-(y22))-((x11)-(x22))*((y00)-(y11))) < M)
//#define resolve(a0,b0,c0,a1,b1,c1) ((((c0)*(b1)-(b0)*(c1))/((a0)*(b1)-(b0)*(a1))) > 0.0 && (((a0)*(c1)-(a1)*(c0))/((a0)*(b1)-(b0)*(a1))) > 0.0 )
    /*
   if (!(are_align(x0,y0,x1,y1,x2,y2) ||
        are_align(x0,y0,x1,y1,x3,y3) ||
        are_align(x0,y0,x2,y2,x3,y3) ||
        are_align(x2,y2,x1,y1,x3,y3)
            ))
    {
        if(resolve(x0-x3,x1-x3,x3-x2,y0-y3,y1-y3,y3-y2))
        {
            printf("yes\n");
            return EXIT_SUCCESS;
        }
    }
    printf("NO\n");
    */
#define equations(x0,y0,x1,y1,x2,y2)(((y1-y0)*(x2)-(x1-x0)*(y2)+y0*(x1-x0)-x0*(y1-y0)))
#define Good(x0,y0,x1,y1,x2,y2,x3,y3)(equations(x0,y0,x1,y1,x2,y2)*equations(x0,y0,x1,y1,x3,y3)>0.0)
int main(){
    double x0,y0,x1,y1,x2,y2,x3,y3;
    printf("Enter x0 y0 : ");scanf("%lf %lf",&x0,&y0);
    printf("Enter x1 y1 : ");scanf("%lf %lf",&x1,&y1);
    printf("Enter x2 y2 : ");scanf("%lf %lf",&x2,&y2);
    printf("Enter x3 y3 : ");scanf("%lf %lf",&x3,&y3);

   if( Good(x0,y0,x1,y1,x2,y2,x3,y3) &&
   Good(x0,y0,x2,y2,x1,y1,x3,y3) && Good(x1,y1,x2,y2,x0,y0,x3,y3))
   {
    printf("Yes\n");
   }else{printf("No\n");}
    return EXIT_SUCCESS;
}