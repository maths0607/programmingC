#include <stdio.h>

int main() {
    int num = 1,ver;
    ver= *(char*)&num;
    if (ver == 1) {
        printf("Little Endian\n");
    } else if (ver== 0) {
        printf("Big Endian\n");
    } else {
        printf("Mixed Endian\n");
    }
    return 0;
}
