#include <stdio.h>

int funct(int a ){
    static int old=0;
    int temp=old;
    old=a;
    printf("%d\n",temp);
    return temp;
}
void main (){
    funct(5);
    funct(6) ;
    funct(9);
}