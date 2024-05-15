#include <stdio.h>
#include <stdlib.h>
#define M 1000
int main() {
    char input[M],e;
    int n,res=0;
    printf("Enter the string : ");scanf("%s",input);
    n=0;
    while(n<M && input[n] != '.'){
        //printf("ici");
        e=input[n];
        switch (e)
        {
        case 'a':
            if (res%3==0){
                res++;
            }
            break;
        case 'b':
            if (res%3==1){
                res++;
            }
            break;
        case 'c':
            if (res%3==2){
                res++;
            }
        default:
            break;
        }
        n++;
    }
    printf("result is %d\n",res);
    return 0;
}