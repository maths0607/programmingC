#include <stdio.h>
//5.1
#define f(x) (((x)*(x)*(x))-((x)*(x))+(5*(x))-3)
//5.2
#define W(x,y) x=#y 
//5.3
#define conc(x,y) x##y##x
//5.4
#define P 3
#define Q 5
#define R 25
#if !(((P)+(Q))>(R) && ((P)+(R))>(Q) && ((Q)+(R))>(P))

#error not posible

#endif
//5.5
//5.6
//#define NAME_FILE_FIRST
#ifndef NAME_FILE_SECOND
#ifndef NAME_FILE_FIRST
#define NAME_FILE_FIRST
#else
#define NAME_FILE_SECOND
#endif
/* the contenu here*/
#endif

/* le reste sont des tests */


#define OUT(x) printf(#x);
void main(void){

    printf("\n");
    printf("%u\n",(f(2+1)+1));
    OUT(asdfgh);    
}
