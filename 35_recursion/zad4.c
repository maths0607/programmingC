#include <stdio.h>

int power(int n, int k) {
    if (k == 0) {
        return 1;
    } else if (k % 2 == 0) {
        int temp = power(n, k / 2);
        return temp * temp;
    } else {
        int temp = power(n, (k - 1) / 2);
        return n * temp * temp;
    }
}
