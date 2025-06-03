#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** alocarMatriz(int n) {
    int **matriz = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int*) malloc(n * sizeof(int));
    }
    return matriz;
}

void preencherMatriz(int **matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}

void exibirMatriz(int **matriz, int n) {
    printf("Matriz %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

int somaAcimaDiagonal(int **matriz, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

void liberarMatriz(int **matriz, int n) {
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int n;

    printf("Digite o tamanho da matriz quadrada (n): ");
    scanf("%d", &n);

    srand(time(NULL));

    int **matriz = alocarMatriz(n);
    preencherMatriz(matriz, n);
    exibirMatriz(matriz, n);

    int soma = somaAcimaDiagonal(matriz, n);
    printf("Soma dos elementos acima da diagonal principal: %d\n", soma);

    liberarMatriz(matriz, n);

    return 0;
}
