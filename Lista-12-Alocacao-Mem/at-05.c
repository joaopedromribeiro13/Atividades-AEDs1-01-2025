#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, numero, contador = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    printf("Digite %d valores inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número a ser pesquisado: ");
    scanf("%d", &numero);

    for (int i = 0; i < n; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }

    printf("O número %d aparece %d vez(es) no vetor.\n", numero, contador);

    free(vetor);
    return 0;
}
