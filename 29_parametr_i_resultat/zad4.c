#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int fi(int x){
    int n =x;
    int r = n;
    
    for(int i=2;i*i<n;i++){
        if ( n % i == 0 ){
            r -=r/i;
            while( n % i == 0){
                n = n/i;
            }
           // printf("%u",r);
        }
    }
   r -= r/n;
    return r;
}
int main(){
    printf("%u\n",fi(127));
    return 0;
}