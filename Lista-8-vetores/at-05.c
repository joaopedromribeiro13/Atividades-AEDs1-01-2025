#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetorOriginal[10];
    int vetorPares[10];
    int qtdPares = 0;

    srand(time(NULL));

    for(int i = 0; i < 10; i++) {
        vetorOriginal[i] = 5 + rand() % 16;
    }

    printf("Vetor original: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetorOriginal[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++) {
        if(vetorOriginal[i] % 2 == 0) {
            vetorPares[qtdPares] = vetorOriginal[i];
            qtdPares++;
        }
    }

    printf("Vetor de pares: ");
    for(int i = 0; i < qtdPares; i++) {
        printf("%d ", vetorPares[i]);
    }
    printf("\n");

    return 0;
}