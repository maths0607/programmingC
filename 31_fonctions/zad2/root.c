#include "function_f.h"
#include <stdio.h>
#include "math.h"

double root(double a, double b) {
    if (f(a) * f(b) > 0) {
        printf("Error\n");
        return 0;
    }

    double c;
    while (fabs(b - a) > 0.0001) {
        c = (a + b) / 2;
        if (f(c) == 0) {
            return c;
        } else if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    return c;
}
