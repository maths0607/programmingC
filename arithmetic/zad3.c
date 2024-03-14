#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned int a = 0;
    printf("Enter the number of boxes: "); scanf("%d",&a);
    printf("\t%d camions need.\n",(a+32-1)/32);
    return EXIT_SUCCESS;
}