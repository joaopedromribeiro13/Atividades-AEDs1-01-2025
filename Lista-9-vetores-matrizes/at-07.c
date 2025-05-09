#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define max 100

// B
void preencheMatriz(int matriz[][max], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}

// C
void somaDiagonalPrincipal(int matriz[][max], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += matriz[i][i];
    }
    printf("Soma da diagonal principal: %d\n", soma);
}

// D
void somaAbaixoDiagonal(int *matriz, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            soma += *(matriz + i * n + j);
        }
    }
    printf("Soma abaixo da diagonal principal: %d\n", soma);
}

int main() {
    // A
    int n;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);

    if (n <= 0 || n > max) {
        printf("Tamanho invalido.\n");
        return 1;
    }

    int matriz[max][max];
    srand(time(NULL));

    preencheMatriz(matriz, n);
    somaDiagonalPrincipal(matriz, n);
    somaAbaixoDiagonal(&matriz[0][0], n);

    return 0;
}