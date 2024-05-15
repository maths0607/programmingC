#include <stdio.h>

int main() {
    int num1;
    char ch;
    _Bool boolVar;
    short sh;
    long lg;
    float fl;
    double dbl;
    long double lgDbl;
    int num2;

    printf("Address of num1: %p\n", &num1);
    printf("Address of ch: %p\n", &ch);
    printf("Address of boolVar: %p\n", &boolVar);
    printf("Address of sh: %p\n", &sh);
    printf("Address of lg: %p\n", &lg);
    printf("Address of fl: %p\n", &fl);
    printf("Address of dbl: %p\n", &dbl);
    printf("Address of lgDbl: %p\n", &lgDbl);
    printf("Address of num2: %p\n", &num2);

    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of char: %lu\n", sizeof(char));
    printf("Size of _Bool: %lu\n", sizeof(_Bool));
    printf("Size of short: %lu\n", sizeof(short));
    printf("Size of long: %lu\n", sizeof(long));
    printf("Size of float: %lu\n", sizeof(float));
    printf("Size of double: %lu\n", sizeof(double));
    printf("Size of long double: %lu\n", sizeof(long double));
    
    printf("Difference in addresses num1 and ch: %ld\n", (long)&ch - (long)&num1);
    printf("Difference in addresses ch and boolVar: %ld\n", (long)&boolVar - (long)&ch);
    printf("Difference in addresses boolVar and sh: %ld\n", (long)&sh - (long)&boolVar);
    printf("Difference in addresses sh and lg: %ld\n", (long)&lg - (long)&sh);
    printf("Difference in addresses lg and fl: %ld\n", (long)&fl - (long)&lg);
    printf("Difference in addresses fl and dbl: %ld\n", (long)&dbl - (long)&fl);
    printf("Difference in addresses dbl and lgDbl: %ld\n", (long)&lgDbl - (long)&dbl);
    printf("Difference in addresses lgDbl and num2: %ld\n", (long)&num2 - (long)&lgDbl);

    return 0;
}
