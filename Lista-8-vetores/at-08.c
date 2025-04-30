#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], intersecao[10];
    int tamanhoIntersecao = 0;

    printf("Vetor 1: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Vetor 2: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(vetor1[i] == vetor2[j]) {
                int jaExiste = 0;
                for(int k = 0; k < tamanhoIntersecao; k++) {
                    if(intersecao[k] == vetor1[i]) {
                        jaExiste = 1;
                        break;
                    }
                }
                if(!jaExiste) {
                    intersecao[tamanhoIntersecao] = vetor1[i];
                    tamanhoIntersecao++;
                }
                break;
            }
        }
    }

    printf("Vetor interseccao: ");
    for(int i = 0; i < tamanhoIntersecao; i++) {
        printf("%d ", intersecao[i]);
    }
    printf("\n");

return 0;
}