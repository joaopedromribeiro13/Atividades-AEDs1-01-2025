#include <stdio.h>

void SubtracaoDeVetor(int VetorA[], int VetorB[], int VetorC[]) {
    for(int i=0; i<10; i++) {
        VetorC[i]=VetorA[i]-VetorB[i];
    }
}

int main() {
    int VetorA[10], VetorB[10], VetorC[10];

    printf("Digite os 10 valores do vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("VetorA[%d]: ", i);
        scanf("%d", &VetorA[i]);
    }
    printf("\nDigite os 10 valores do vetor B:\n");
    for (int i = 0; i < 10; i++) {
        printf("VetorB[%d]: ", i);
        scanf("%d", &VetorB[i]);
    }
    
    SubtracaoDeVetor(VetorA, VetorB, VetorC);

    printf("\nA subtracao do Veotr A e B eh:\n");
    for(int i=0; i<10; i++) {
        printf("Vetor C[%d] eh %d\n", i, VetorC[i]);
    }

return 0;
}