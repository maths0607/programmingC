#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char chaine[20],enter;
    unsigned long long  result=0,a=0;
    int n=0;
    printf("Enter the string : ");scanf("%s",chaine);
    while(n<20){
        enter=chaine[n];n++;
        if(enter >= '0' && enter<='9'){
            a = a*10LLU+(unsigned long long )(enter-'0');
            if(a>result){result=a;};
        } else{ a=0;}
    }
    printf("max : %llu\n",result);
    return EXIT_SUCCESS;
}