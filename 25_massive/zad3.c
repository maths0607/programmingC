#include <stdio.h>
#define M 5
#define C 7
#define calcul (nb,c6,c5,c4,c3,c2,c1,c0)(((nb)**6)*(c6)+((nb)**5)*(c5)+((nb)**4)*(c4)+((nb)**3)*(c3)+((nb)**2)*(c2)+(nb)*(c1)+(c0))
int main(){
    float matrix[M][M];
    float c[C],result=0;
    int i=0, j=0,k;

    printf("Enter the elements of the 5x5 square matrix:\n");
    while(i < M) {
            j=0;
        while(j < M) {
            scanf("%d", &matrix[i][j]);
            j++;
        }
        i++;
    }
    i=0;j=0;
    printf("Enter the coefficients of the polynomial of degree 6:\n");
    while(i < C) {
            scanf("%d", &c[i]);
    }
    i=0;j=0;
    while(i<M){
        j=0;
        while(j<M){
            result += calcul (matrix[i][j],c[6],c[5],c[4],c[3],c[2],c[1],c[0]);
            j++;
        }
        i++;
    }
    printf("The result is : %f",result);
    return 0;
}