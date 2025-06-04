#include <stdio.h>
#include <stdlib.h>

// Função que calcula a soma dos elementos maiores que a média
double soma_maiores_que_media(double **matriz, int n) {
    double soma_total = 0.0;
    int total_elementos = n * n;

    // Calcula a soma total dos elementos
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            soma_total += matriz[i][j];
        }
    }

    double media = soma_total / total_elementos;

    // Soma apenas os elementos maiores que a média
    double soma_maiores = 0.0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] > media) {
                soma_maiores += matriz[i][j];
            }
        }
    }

    return soma_maiores;
}

int main() {
    int n;
    double **matriz;

    printf("Digite o tamanho da matriz quadrada (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Tamanho inválido.\n");
        return 1;
    }

    // Alocação dinâmica da matriz n x n
    matriz = (double **)malloc(n * sizeof(double *));
    if (matriz == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        matriz[i] = (double *)malloc(n * sizeof(double));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }
    }

    // Preenchimento da matriz
    printf("Digite os elementos da matriz (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Cálculo da soma dos elementos maiores que a média
    double resultado = soma_maiores_que_media(matriz, n);
    printf("Soma dos elementos maiores que a média: %.2lf\n", resultado);

    // Liberação da memória alocada
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
