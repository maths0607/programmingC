#include <stdio.h>

int binSearch(int *arr, int length, int n) {
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

int binSearchRec (int tab[], int elem, int indexL, int indexR){
    int milieu = (indexR+indexL)/2;
 
    if(elem == tab[milieu]) return milieu;
    if (indexL == indexR) return -1;
 
    if (elem < tab[milieu]) return binSearchRec(tab,elem, indexL, milieu - 1);
    else return binSearchRec(tab,elem, milieu + 1, indexR);
}