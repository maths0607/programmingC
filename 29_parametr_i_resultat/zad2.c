#include <stdio.h>
#include <math.h>

float surface(float ax,float ay,float bx,float by,float cx,float cy){
    float s = 0.5 * fabs(ay*(cx-bx)+cy*(bx-ax)+by*(ax-cx))
    return s;
}