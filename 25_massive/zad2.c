#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 5
#define distance(x,y,x1,y1)(((x1)-(x))*((x1)-(x))+((y1)-(y))*((y1)-(y)))
int main (){
    double coor[M][2],dist,dist_max=0.0;
    
    int n1=0,n2=0;
    while(n1<M){
        printf("%d) x y : ",n1);scanf("%lf %lf",&coor[n1][0],&coor[n1][1]);
        n1++;
    }
    n1=0;
    while(n1<M-1){
        n2=n1+1;
        while (n2<M)
        {
            dist=distance(coor[n1][0],coor[n1][1],coor[n2][0],coor[n2][1]);
            dist_max = dist > dist_max ? dist : dist_max;
            n2++;
        }
        n1++;        
    } 
    printf(" the distance is %lf\n",sqrt(dist_max));
    return 0;
}