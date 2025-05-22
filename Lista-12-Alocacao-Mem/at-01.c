#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *vetor = (int *)malloc(1000 * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < 1000; i++) {
        vetor[i] = rand() % 10 + 1;
    }

    printf("\nSoma dos elementos: %d\n", soma_elementos(vetor, 1000));

    for (int i = 0; i < 1000; i++) {
        printf("%d ", vetor[i]);
        if ((i+1) % 20 == 0) printf("\n");
    }

    free(vetor);
    return 0;
}
