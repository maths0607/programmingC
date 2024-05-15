#include <stdio.h>
#include <limits.h>
int *funct(){
    static int a,b,c;
    int* temp;
    temp = a<b ? &a : &b;
    if(*temp > c ) temp=&c;
    printf("%d %d %d\n",a,b,c);
    return temp;
}
int main (){
    *funct()=2;
    *funct()=5;
    *funct()=100;
    *funct()=-9;
    printf("result : %d\n",*funct());
    return 0;

}