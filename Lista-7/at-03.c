#include <stdio.h>

void calculaOperacoes(int a, int b, int *soma, int *produto) {
    *soma = a + b;
    *produto = a * b;
}

int main() {
    int a, b, soma, produto;
    
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    calculaOperacoes(a, b, &soma, &produto);

    printf("A soma eh: %d\n", soma);

    printf("O produto eh: %d", produto);

return 0;
}