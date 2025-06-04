#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 6

// Função que verifica se um número já está no vetor
int ja_existe(int *vetor, int tamanho, int num) {
    for (int i = 0; i < tamanho; i++) {
        if (*(vetor + i) == num) {
            return 1; // número já existe
        }
    }
    return 0; // número não existe
}

int main() {
    int vetor[TAM];
    int *ptr = vetor;
    int count = 0;
    int num;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    while (count < TAM) {
        num = (rand() % 60) + 1; // Gera número entre 1 e 60
        if (!ja_existe(vetor, count, num)) {
            *(ptr + count) = num; // Usa aritmética de ponteiro para armazenar
            count++;
        }
    }

    // Exibe o vetor
    printf("Números sorteados: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *(ptr + i)); // Usa aritmética de ponteiro para exibir
    }
    printf("\n");

    return 0;
}
