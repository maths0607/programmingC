#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int *arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
int search(int *M,int l,int n){
    for(int i=0;i<l;i++){
        if(M[i]==n) return i;
    }
    return -1;
}
int binarySearch(int *arr, int length, int n) {
    int left = 0;
    int right = length - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == n) {
            return mid;
        }
        if (arr[mid] < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}


int main() {
    const int SIZE = 10000;
    int arr[SIZE];
    
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 30001;
    }
    clock_t start, end;
    double time_taken;
    bubbleSort(arr, SIZE);
    for (int i = 0; i < 3; i++) {
         start = clock();
        for (int j = 0; j < 10000; j++) {
            int random_index = rand() % SIZE;
            int target = arr[random_index];

            if (i == 0) { 
                binarySearch(arr,SIZE,target);
            } else if (i==2){ 
                in(arr, SIZE, target);
            }else{
                search(arr,SIZE,target);
            }
        }
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;

        if (i == 0) {
            printf("Binary search time: %f milliseconds\n",time_taken);
        } else if (i==1)
        {
            printf("linear time: %f milliseconds\n",time_taken);
        }
         else{
            printf("Interpolation search time: %f milliseconds\n",time_taken);
        }
    }
    return 0;
}
