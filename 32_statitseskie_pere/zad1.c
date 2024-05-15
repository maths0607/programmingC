# include <stdio.h>
int funct(){
    static int  n=0;
    n++;
    printf("%d\n",n);
    return n;
}
void main (){
    funct();
    funct();
    funct();
}