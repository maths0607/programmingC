#include <stdio.h>

int p(int n, int m) {
    if (n == 0) {
        return 1;
    }
    if (n<0 || m == 0) {
        return 0;
    }
    return p(n - m, m) + p(n, m - 1);
}

int main() {
    int n ;
    printf("Enter n : ");scanf("%d",&n);
    int result = p(n, n);
    printf("Result %d : %d\n", n, result);
    return 0;
}
