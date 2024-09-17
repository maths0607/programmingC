#include <stdio.h>
#include <stdarg.h>
double average(double first, ...) {
    double total = 0;
    int count = 0;
    double num;
    va_list args;
    va_start(args, first);
    num = first;
    while (num != 0) {
        total += num;
        count++;
        num = va_arg(args, double);
    }
    va_end(args);
    if (count == 0) {
        return 0;
    }
    return total / count;
}

int main() {
    double result = average(5.0, 8.0, 10.0, 0.0, 2.0, 4.0, 0.0);
    printf("mean: %.2f\n", result);
    return 0;
}