#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    unsigned int n;
    printf("Enter the number n : ");scanf("%d",&n);
   
    printf("2^%d = %d\n",n,1<<n);
    return EXIT_SUCCESS;
}