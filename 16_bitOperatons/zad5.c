#include <stdio.h>
#include <stdlib.h>
#define  Max 4294967295
int main(){
    unsigned int n,i=0,index=0;
    printf("Enter the number : ");scanf("%d",&n);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);
    i+= ((n>> ++index) & 1);i+= ((n>> ++index) & 1);

    printf("result %d\n",i);



    return EXIT_SUCCESS;
}