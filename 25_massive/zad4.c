#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define  M 8
int main(){
    int coor[M][M];
    
    int n1=0,n2=0;
    while(n1<M){
        printf(" x y : ");scanf("%d %d %d %d %d %d %d %d",&coor[n1][0],&coor[n1][1],&coor[n1][2],&coor[n1][3],&coor[n1][4],&coor[n1][5],&coor[n1][6],&coor[n1][7]);
        n1++;
    }
    n1=0;
    int not_found = 1;
    while(n1<M && not_found){
        n2=0;
        while (n2<M && not_found)
        {
            if(coor[n1][n2] == 1){
                int k = n2+1;
                while (k<M && not_found)
                {
                    not_found = coor[n1][k] == 1 ? 0 : 1;
                    k++;
                }
                k = n1+1;
                while (k<M && not_found)
                {
                    not_found = coor[k][n2] == 1 ? 0 : 1;
                    k++;
                }
                k=1;
                while (not_found && k<M)
                {
                    if( k+n1<M && k+n2<M){
                        not_found = coor[k+n1][k+n2] == 1 ? 0: 1;
                        }
                    if (k+n1<M && (0<=n2-k && n2-k<=M) && not_found)
                    {
                        not_found = coor[k+n1][n2-k] == 1? 0: 1;
                    }
                    k++;
                }

            } 
            n2++;           
        }
        n1++;
        
    }
    if(not_found){
        printf("NO\n");
    }else{
        printf("yes");
    }

    return 0;
}