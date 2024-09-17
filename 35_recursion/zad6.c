#include <stdio.h>
int sequence(int m, int produit) {
    if (m == 2) {
        return produit;
    } else if (m==1){return  3;} 
    else{
        
        return sequence(m - 1,produit*(produit+1)-1 );
    }
}
int main() {
    int m;
    printf("Enter the value : ");
    scanf("%d", &m);
    int result = sequence(m,2);
    printf(" %d : %d\n", m, result);
    return 0;
}