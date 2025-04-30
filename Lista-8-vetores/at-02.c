#include <stdio.h>

int main() {
    int posicao;
    float maior;
    float vetor[10];

    for(int i=0; i<10; i++) {
        scanf("%f", &vetor[i]);
    }

    maior = vetor[0];
    posicao = 0;

    for(int i=1; i<10; i++) {
        if(vetor[i]>maior) {
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("Maior valor: %.1f na posicao 6", maior, posicao);
    return 0;
}