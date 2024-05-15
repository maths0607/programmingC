#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    unsigned int x;
    printf("Enter the number : ");scanf("%d",&x);
    printf("it containes : %d digits\n",( unsigned int )ceil(log(x+1)/log(10)));
    return EXIT_SUCCESS;
}