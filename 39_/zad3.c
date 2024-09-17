#include <stdio.h>
#include <stdlib.h>

void triFusion(int i, int j, int *tab, int *tmp) {
    if(j <= i){ return;}
  
    int m = (i + j) / 2;
    
    triFusion(i, m, tab, tmp);     //let's sort the left
    triFusion(m + 1, j, tab, tmp); //the right

    int pg = i;     //pg  and pd use to know the next small number to put 
    int pd = m + 1; 
    int c;          

    for(c = i; c <= j; c++) {
        if(pg == m + 1) { //at the end
            tmp[c] = tab[pd];
            pd++;
        }else if (pd == j + 1) { //at the end
            tmp[c] = tab[pg];
            pg++;
        }else if (tab[pg] < tab[pd]) { //found the smaller in left
            tmp[c] = tab[pg];
            pg++;
        }else {  //find tje smaller in the right
            tmp[c] = tab[pd];
            pd++;
        }
    }

    for(c = i; c <= j; c++) {  //copier les éléments de tmp[] à tab[]
        tab[c] = tmp[c];
    }
}
int in(int *A, int n, int target)
{
    if (n == 0) {
        return -1;
    }
    int low = 0, high = n - 1, mid;
    while (A[high] != A[low] && target >= A[low] && target <= A[high])
    {
        mid = low + ((target - A[low]) * (high - low) / (A[high] - A[low])); 
        if (target == A[mid]) {
            return mid;
        }
        else if (target < A[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    } 
    if (target == A[low]) {
        return low;
    }
    else {
        return -1;
    }
}
int main() {
    int arr[100],temp[100];
    for(int i=0;i<100;i++){
        arr[i]=rand()%1000;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    int k ;
    
    triFusion(0,99,arr,temp);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d:%d   ",i, arr[i]);
    }
    printf("enter k : ");scanf("%d",&k);
    printf("index is : %d\n",in(arr , n ,k));
    return 0;
}
