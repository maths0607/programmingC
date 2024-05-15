#include <stdio.h>
#include <stdlib.h>
int main (){
    unsigned int n;
    printf("Input n: "); scanf("%d", &n);
   
    printf("result %d\n", ( n%2==0 ? 1 : -1 ));
    
    return EXIT_SUCCESS;
}