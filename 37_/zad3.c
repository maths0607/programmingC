#include <stdio.h>

void insertion(int *arr int n) {
    int i, key, j;
    for (i=1; i < n; i++) {
        key = arr[i];
        j = i-1;
        while (j >=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void insertion2(int *arr, int n) {
    int i, temp, j;
    for (i=1; i < n; i++) {
        j = i;
        while (j >=0 && arr[j-1] >arr[j] ) {
            temp=arr[j]
            arr[j] = arr[j-1];
            j--;
        }
    }
}
