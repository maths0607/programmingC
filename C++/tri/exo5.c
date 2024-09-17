int binSearchRenew(int *arr, int length, int n) {
    int left = 0;
    int right = length - 1;
    int ans,res=-1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == n) {
           // while (mid-1>0 && arr[mid-1] == n ) 
            //{mid--;}
            res = mid;
            right=mid-1;
        }
        if (arr[mid] < n) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return res; 
}
