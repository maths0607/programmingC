#include <stdio.h>
#include <math.h>
#include "function_f.h"
#include "root.h"

int main() {
    double result = root(0.5,M_PI);
    printf("the root is  %lf\n", result);
    printf("%lf\n",f(result));
    return 0;
}
