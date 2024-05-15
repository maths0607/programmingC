#include <stdio.h>

void fonction2( double* a, int b,int c){
    int *temp = (int*)a;
    temp[0]=b;
    temp[1]=c;
}