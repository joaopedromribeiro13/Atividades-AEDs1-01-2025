#include <stdio.h>

double umSobreImpar (int n) {
    int den;
    den = (2*n)+1;
    return 1.0/den;
}

int main() {
    int n;
    printf("Digite n:");
    scanf("%d", &n);

    printf("O n-esimo termo: %.2f", umSobreImpar(n));
    return 0;
}
