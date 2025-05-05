#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define tam 20

void buscaNum(int vetor[], int num) {
    int achou=0;

    for(int i=0; i<tam; i++) {
        if (vetor[i]==num) {
            printf("posicao %d", i);
            achou=1;
        }
    }
    if (achou==0) {
        printf("numero nao localizado");
    }
}

int main() {
    int vetor[tam], num;
    srand(time(NULL));

    for(int i=0; i<tam; i++) {
        vetor[i]=rand()%100+1;
    }

    printf("digite um numero: ");
    scanf("%d", &num);

    buscaNum(vetor, num);
return 0;
}