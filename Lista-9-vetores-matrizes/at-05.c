#include <stdio.h>
#define tam 10

void preencheValores(int X[]) {
    printf("Digite os numeros do vetor: ");
    for(int i=0; i<tam; i++) {
        scanf("%d", &X[i]);
    }
}

void copiaNegativos(int vetor[], int vetorNeg[]) {
    int j=0;
    for(int i=0; i<tam; i++) {
        if(vetor[i]<0) {
            vetorNeg[j]=vetor[i];
            j++;
        }
    }
    vetorNeg[j]=0;
}

int main() {
    int vetor[tam];
    int vetorNeg[tam+1];
    preencheValores(vetor);
    copiaNegativos(vetor, vetorNeg);

    for(int i=0; i<tam+1; i++) {
        if(vetorNeg[i]==0) {
            break;
        }
        printf("%d", vetorNeg[i]);
    }
return 0;
}

