#include <stdio.h>

int change(int n){
    int i=0;
    int co=n;
    while(co!=1){
        i++;
        co = co % 2 == 0? co/2 : 3*co+1;
    }
    return i;
}