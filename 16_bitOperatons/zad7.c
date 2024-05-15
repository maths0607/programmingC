#include <stdio.h>
#include <stdlib.h>
int main (){
    unsigned int n,x,n1;
    printf("Enter the number :");scanf("%d",&n);
    n1=~(n|(n-1));
    x = n1 ^ (n1 & (n1-1));
    x=x+( unsigned)(x/2);
    printf("result : %d\n", n ^ x);
    
    return EXIT_SUCCESS;
}