#include <stdio.h>

int partition(int n, int result){
    if (n==2){
        return result;
    }else if (n==1) {return 1;}else{
        return partition(n-1,2*result);
    }
}

int main() {
    int n;
    printf("Enter n : ");scanf("%d",&n);
    int result = partition(n, 2);
    printf("Result %d : %d\n", n, result);
    return 0;
}