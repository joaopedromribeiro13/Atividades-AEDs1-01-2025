#include <stdio.h>

void fatorial(int n, int *resultado) {
    *resultado = 1;
    for(int i = n; i > 0; i--) {
        *resultado *= i;
    }
}

int main() {
    int n, resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    fatorial(n, &resultado);

    printf("Fatorial de %d eh %d\n", n, resultado);

return 0;
}