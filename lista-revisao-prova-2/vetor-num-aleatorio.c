#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[20];
    srand(time(NULL));

    for(int i=0; i<20; i++) {
        vetor[i]=rand()%100+1;
    }
    printf("Valores Gerados:\n");
    for(int i=0; i<20; i++) {
        printf("%d ", vetor[i]);
    }
return 0;
}