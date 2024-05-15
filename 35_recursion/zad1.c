#include <stdio.h>
void recur(int n){
    if(n<10){ 
        printf("%d\n",n);}
    else{
        printf("%d\t",n%10);
        recur(n/10);   
    }
}

void recur2(int n){
    if (n<10){
        printf("%d\t",n);
    }else{
      recur2(n/10);
      printf("%d\t",n%10);
    }
}
int main(){
    recur2(614);
    return 0;
}
