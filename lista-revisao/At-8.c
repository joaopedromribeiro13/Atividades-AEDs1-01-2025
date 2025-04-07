#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;

    for(int i=n; i>0; i--) {
        resultado*=i;
    }
    return resultado;
}

int main () {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O fatorial de %d eh: %d", n, fatorial(n));
}