#include <stdio.h>

int main() {
    float vetor[10];
    float temp;

    printf("Digite 10 numeros reais: ");
    for(int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("Vetor ordenado: ");
    for(int i = 0; i < 10; i++) {
        printf("%.1f ", vetor[i]);
    }
    printf("\n");

return 0;
}