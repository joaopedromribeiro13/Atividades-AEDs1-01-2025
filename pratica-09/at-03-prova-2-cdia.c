#include <stdio.h>
#include <stdlib.h>

// Função recursiva que calcula o produto dos elementos do vetor
double produto_recursivo(double *vetor, int n) {
    if (n == 0) {
        return 1.0; // Caso base: produto neutro
    }
    return *(vetor + n - 1) * produto_recursivo(vetor, n - 1);
}

int main() {
    int n;
    double *vetor;

    // Lê o número de elementos
    printf("Digite a quantidade de números reais: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    // Aloca dinamicamente o vetor
    vetor = (double *) malloc(n * sizeof(double));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Lê os valores e armazena no vetor
    printf("Digite os %d números reais:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", vetor + i); // aritmética de ponteiros
    }

    // Chama a função recursiva para calcular o produto
    double resultado = produto_recursivo(vetor, n);

    // Exibe o resultado
    printf("O produto dos elementos é: %.6lf\n", resultado);

    // Libera a memória alocada
    free(vetor);

    return 0;
}
