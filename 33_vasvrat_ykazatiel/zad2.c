#include <stdio.h>
int x=1,y=2,z=3;
int *f(){
    static int n=-1;
    n++;
    n=n%3;
    if(n==0) return &x;
    if(n==1) return &y;
    if(n==2) return &z;
}
int main(){
    printf("%d\n",*f());
    printf("%d\n",*f());
    printf("%d\n",*f());
    printf("%d\n",*f());
    return 0;
}