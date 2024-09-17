#include <stdio.h>
#include <stdlib.h>
int f(int a , int b){
    if (a%2==b%2){
        if (a%2==0){
            return a-b;
        }
        return b-a;
    }
    if(a%2==0) return -1;
    return 1;

}
void trie(int *arr,int n, int (*f)(int , int)){
    for (int i = 0; i < n -1; i++) {
    int sorted =1;
    for (int j =0;j < n- i - 1; j++) {
        if (f(arr[j],arr[j+ 1])>0) {
            int temp= arr[j];
            arr[j] =arr[j + 1];
            arr[j+1]=temp;
            sorted=0;
        }
    }
    if (sorted) break;
    }
}

int main2(){
    int M[]={1,4,8,5,6,8,9,6,4,8,56,56,7};
    int n = sizeof(M)/sizeof(int);
    trie(M,n,f);
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", M[i]);
    }
    printf("\n");

    return 0;

}
int main() {
    int arr[100],temp[100];
    for(int i=0;i<100;i++){
        arr[i]=rand()%1000;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    trie(arr,n,f);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
