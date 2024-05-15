#include <stdio.h>
void tour(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    tour(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    tour(n - 1, aux, to, from);
}
int main() {
    int n = 7; // Nombre de disques
    char from = 'A', to = 'C', aux = 'B'; // Tiges source, destination et auxiliaire
    tour(n, from, to, aux);

    return 0;
}
