#include <stdio.h>

int search(int *M,int l,int n){
    for(int i=0;i<l;i++){
        if(M[i]==n) return i;
    }
    return -1;

}