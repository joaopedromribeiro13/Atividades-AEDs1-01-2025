#include <stdio.h>

int par(int n) {
    return 2*n;
}

int main() {
    int n;
    printf("Qual eh o numero:");
    scanf("%d", &n);
    printf("O n-esimo termo de %d eh: %d", n, par(n));
return 0;
}
