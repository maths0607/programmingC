#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    unsigned int a, b, c,ab,bc,ac;
    printf(" enter the 3 numbers : ");scanf("%d %d %d",&a,&b,&c);
    ab =  a&b;
    bc = b&c;
    ac = c&a;
    //printf("ab= %d,ac=%d, bc=%d\n",ab,ac,bc);
    printf("result : %d\n", (ab | ac) | bc);

    return EXIT_SUCCESS;
}
/*
a=011
b=100
c=101
ab=000
bc=100
ac=001
result 1 0 1
*/