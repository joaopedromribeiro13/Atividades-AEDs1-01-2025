#include <stdio.h>

void cincoElementos(int vetor[], int tam) {
    for(int i=0; i<tam; i++) {
        printf("digite cinco numeros: ", i);
        scanf("%d", &vetor[i]);
    }
}

int menorposicao(int vetor[], int tam) {
    int menor=0;

    for(int i=1; i<tam; i++) {
        if(vetor[i]<menor) {
            menor=i;
        }
    }
return menor;
}

void trocaComPrimeiro(int vetor[], int tam) {
    int posMenor = menorposicao(vetor, tam);

    
}

int main() {
    int vetor[5];

    cincoElementos(vetor, 5);
    trocaComPrimeiro(vetor, 5);

return 0;
}