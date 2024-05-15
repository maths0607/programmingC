#include <stdio.h>
#include <stdlib.h>
int nod(int a, int b, int *k, int *l) {
    int s = 0, t = 1, u = 1, v = 0;

    while (b != 0) {
        int q = a / b;
        int r = a % b;

        int tmp = s - q * u;
        s = u;
        u = tmp;

        tmp = t - q * v;
        t = v;
        v = tmp;
        a = b;
        b = r;
    }

    *l = s;
    *k = t;
    return a;
}

int main() {
    int a = rand();
    int b = rand();
    int k, l, c;

    c = nod(a, b, &k, &l);
    printf("(%d)*(%d)+(%d)*(%d)=(%d)\n", k,a,l,b,c);

    return 0;
}
