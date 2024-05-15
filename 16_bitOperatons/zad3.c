#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    unsigned long long x,p,x2,x3,x4;
    printf("Enter x,p");scanf("%llu %llu",&x,&p);//m 
    //on rend a zero lartie inf ou egale a cette bit dans x2
    x2=(x>>(p+1))<<(p+1);//1000
    //
    x3= x ^ x2; //0010
    x4 = x3 ^ (((x3>>p) & 1) << p);//0010 ^ 0010 = 0000
    printf(" result %llu\n",(x2>>1)|x4); // 10

    return EXIT_SUCCESS;
}