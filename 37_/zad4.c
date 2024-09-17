#include <stdio.h>
#include <stdlib.h>

void triBase(int *arr, int n) {
    int bucket[10][n];
    int count[10] = {0};
    int max = arr[0];
    int exp = 1;

    // found max
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
       // sort and collections

    while (max / exp > 0) {
        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / exp) % 10;
            bucket[digit][count[digit]] = arr[i];
            count[digit]++;
        }

        int index = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < count[i]; j++) {
                arr[index] = bucket[i][j];
                index++;
            }
            count[i] = 0;
        }

        exp *= 10;
    }
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("unsorted: ");
    printArray(arr, n);
    baseSort(arr, n);
    printf("sorted: ");
    printArray(arr, n);

    return 0;
}