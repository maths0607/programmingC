#include <stdio.h>
#include <stdlib.h>
#define block 10
int **create(int n){
    if (n%block !=0) return NULL;
    int **p = (int **) malloc(n*sizeof(int *));
    for(int k=0;k<n;k++){
        p[k]=(int*)malloc(block*sizeof(int));
    }
    for (int k=0;k<n;k++){
        for(int i=0;i<block;i++){
           p[k][i]=1;
           printf("%d",p[k][i]);
        }
        printf("\n");
    }
    

    return p;
}
int *access(int **M,int i,int j,int n){
    static int dummy;
    dummy=5;
    if(i<0 || i>=n || j<0 || j> n) exit(1);
    int line = (i/block)*block; 
    if(line > j || line+block <= j) return &dummy;
    return &M[i][j%10];
}
void destroy(int **M){
    for (int i=0;i++;i<block){
        free(M[i]);
    }    
    free(M);
} 
int main(){
    int n=30;
    int **a=create(n);
    
    printf("%d\n",*access(a,5,9,n));
    destroy(a);
}
