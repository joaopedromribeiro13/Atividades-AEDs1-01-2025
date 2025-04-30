#include <stdio.h>

int main() {
    int vetor[15];
    int somaImpares = 0;

    printf("Digite 15 numeros inteiros: ");
    for(int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 15; i++) {
        if(vetor[i] % 2 != 0) {
            somaImpares += vetor[i];
        }
    }

    printf("Soma dos numeros impares: %d\n", somaImpares);
return 0;
}