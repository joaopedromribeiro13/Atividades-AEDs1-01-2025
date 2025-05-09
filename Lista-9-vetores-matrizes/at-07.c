#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define max 100

//B
void preencheMatriz(int matriz[][max], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            matriz[i][j]=rand()%100+1;
        }
    }
}

//C
void somaDiagonalPrincipal(int matriz[][max], int n) {
    int soma=0;
    for(int i=0; i<n; i++) {
        soma+=matriz[i][i];
    }
    printf("Soma diagonal principal: %d\n", soma);
}


int main() {
    //A
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    int matriz[max][max];
    srand(time(NULL));
    preencheMatriz(matriz, n);
    somaDiagonalPrincipal(matriz, n);

return 0;
}