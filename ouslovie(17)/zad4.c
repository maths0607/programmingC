#include <stdio.h>
#include <stdlib.h>
int main (){
    unsigned int n;
    printf("Input n: "); scanf("%d", &n);
   
    printf("result: " ),(n%4==0? printf("cosx"):(n%4==1?printf("-sinx"):(n%4==2?printf("-cosx"):printf("sinx"))));
    printf("\n");
    return EXIT_SUCCESS;
}