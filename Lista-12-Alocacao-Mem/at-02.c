#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma_elementos(int *vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int *vetor = (int *)malloc(1000 * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    srand(time(NULL));  // inicializa gerador de números aleatórios

    for (int i = 0; i < 1000; i++) {
        vetor[i] = rand() % 10 + 1;  // números entre 1 e 10
    }

    for (int i = 0; i < 1000; i++) {
        printf("%d ", vetor[i]);
        if ((i+1) % 20 == 0) printf("\n");  // quebra de linha a cada 20 números para facilitar leitura
    }

    free(vetor);
    return 0;
}
