#include <stdio.h>

int main() {
    int vetor[10];

    for(int i=0; i<10; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<10; i++) {
        printf("Elemento %d na posicao %d\n", vetor[i], i);
    }

return 0;
}