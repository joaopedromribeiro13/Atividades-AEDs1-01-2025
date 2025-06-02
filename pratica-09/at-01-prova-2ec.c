#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor1[20], *vetor2, *pVetor2, num, cont=0;
    srand(time(NULL));

    for(int i=0; i<20; i++) {
        vetor1[i] = rand()%100+1;
        if (vetor1[i] % 3 == 0) {
            cont++;
        }
    }
    //A
    vetor2 = (int*) malloc(cont*sizeof(int));
    if(vetor2==NULL) {
        printf("ERRO");
        return 1;
    }
    pVetor2 = vetor2;
    for(int i=0; i<20; i++) {
        if(vetor1[i] % 3 == 0) {
            *pVetor2=vetor1[i];
            pVetor2++;
        }
    }
    //B
    for(int i=0; i<cont; i++) {
        printf("%d ", vetor2[i]);
    }
return 0;
}