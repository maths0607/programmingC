
#include <stdio.h>

void bubble_sort(int arr[]) {
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n -1; i++) {
        int sorted =1;
        for (int j =0;j < n- i - 1; j++) {
            if (arr[j]> arr[j+ 1]) {
                int temp= arr[j];
                arr[j] =arr[j + 1];
                arr[j+1]=temp;
                sorted=0;
            }
        }
        if (sorted) break;
    }
}
