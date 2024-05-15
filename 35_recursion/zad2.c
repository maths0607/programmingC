#include <stdio.h>
#include <stdlib.h>
int** memo;
int combinaison(int n, int k) {
    if (memo[n][k] != 0) {
        return memo[n][k];
    }
    
    if (k == 0 || k == n) {
        memo[n][k] = 1;
        return 1;
    }
    
    memo[n][k] = combinaison(n - 1, k - 1) + combinaison(n - 1, k);
    return memo[n][k];
}
int main() {
    int n ;
    int k ;
    printf("saisissez n,k : ");scanf("%d %d",&n,&k);
    memo = (int**)malloc((n + 1) * sizeof(int*));
    for (int i = 0; i <= n; i++) {
        memo[i] = (int*)calloc(k + 1, sizeof(int));
    }
    printf("C(%d, %d) = %d\n", n, k, combinaison(n, k));
    
    
    for (int i = 0; i <= n; i++) {
        free(memo[i]);
    }
    free(memo);
    
    return 0;
}
