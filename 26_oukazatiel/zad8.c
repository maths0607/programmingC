#include <stdio.h>
#include <stdlib.h>
int g;

int main(){
    int a;printf("%p\n",&a);
    static int c ; printf("%p\n",&c);
    printf("%p\n",&g);
}