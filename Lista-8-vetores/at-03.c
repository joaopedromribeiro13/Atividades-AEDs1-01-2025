#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetorSoma[5];


    for(int i=0; i<5; i++) {
        printf("vetor 1\n");
        scanf("%d", &vetor1[i]);
    }

    for(int i=0; i<5; i++) {
        printf("vetor 2\n");
        scanf("%d", &vetor2[i]);
    }

    for(int i=0; i<5; i++) {
        vetorSoma[i]=vetor1[i]+vetor2[i];
    }

    printf("Vetor soma: ");
    for(int i=0; i<5; i++) {
        printf("%d ", vetorSoma[i]);
    }

return 0;
}