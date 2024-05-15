#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 5
int main(){
    int massive[M];
    int n=0,max=0;
    while(n<M){
        printf("M[%d]= ",n);scanf("%d",&massive[n]);
        max= (max<massive[n]) ? massive[n] : max;
        n++;
    }
    printf("\n\n");
    n=0;
    while(0<max){
        n=0;
        while(n<M){
            if(max<=massive[n]){
                printf(" * ");
            }else{
                printf("   ");
            }
            n++;
        }
        max--;
        printf("\n");
    }
    return 0;
}