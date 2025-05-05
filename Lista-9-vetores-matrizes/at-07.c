#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define max 100

void preencheMatriz(int matriz[][max], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            matriz[i][j]=rand()%100+1;
        }
    }
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    int matriz[max][max];
    srand(time(NULL));
    preencheMatriz(matriz, n);
}