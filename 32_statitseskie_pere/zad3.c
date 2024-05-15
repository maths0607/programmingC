#include <stdio.h>

int funct(int m ){
    static int a=0,b=0,c=0;
    int temp=a;a=b;b=c;c=m; 
    printf("%d\n",temp+a+b);
    return temp+a+b;

}
int main (){
    funct(1);
    funct(3);
    funct(5);   
}