#include <stdio.h>

char f(char a, char b) {
    return a + b;
}

char g(char a, char b) {
    return a * b;
}

char calculateExpression(char (*f)(char, char), char (*g)(char, char), char M[]) {
    char result = f(M[0], M[1]);
    for (int i = 2; i < 80; i += 2) {
        result = f(result, g(M[i], M[i+1]));
    }
    return result;
}

int main() {
    char M[80]; 
    for (int i=0;i<80; i++) {
        M[i] = 'A' + i; }
    char result = calculateExpression(f, g, M);
    printf("Result: %c\n", result);

    return 0;
}
