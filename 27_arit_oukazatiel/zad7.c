#include <stdio.h>
void* founction( void* p){
    int x = (int)p;
    return (void*)(x*x+3*x+1);
}