#include <stdio.h>
#include <stdlib.h>

int somaRecursiva(int *vetor, int n) {
    if (n == 0) {
        return 0; 
    }
    return *vetor + somaRecursiva(vetor + 1, n - 1);
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = (int*) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite %d elementos inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", vetor + i); 
    }

    int soma = somaRecursiva(vetor, n);
    printf("Soma dos elementos do vetor: %d\n", soma);

    free(vetor);

    return 0;
}
