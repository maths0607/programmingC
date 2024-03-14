#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    unsigned int n,bit1,bit2,p1,p2,x;
    printf("enter the number x n1 n2");scanf("%d %d %d",&n,&p1,&p2);
    bit1 =  (n >> p1) & 1;
    bit2 =  (n >> p2) & 1;
    x = (bit1 ^ bit2);
    x = (x << p1) | (x << p2);
    printf("%d => %d\n",x,n ^ x);
    return EXIT_SUCCESS;
}
 