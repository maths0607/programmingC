#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int fonction1(char *first, char *second){
    int res=0;
    char *ver=strstr(first,second);
    while(ver != NULL){
        res++;
        ver=strstr(ver+1,second);
    }
    return res;
}
int fonction2(char *first, char *second){
    int res=0,length=strlen(second);
    char *ver=strstr(first,second);
    while(ver != NULL){
        res++;
        ver=strstr(ver+length,second);
    }
    return res;
}
int main()
{
    char *aaaa="aaaa", *aa="aa";
    printf("answer1 : %d\n",fonction1(aaaa,aa));
    printf("answer2 : %d\n",fonction2(aaaa,aa));
    return 0;
}