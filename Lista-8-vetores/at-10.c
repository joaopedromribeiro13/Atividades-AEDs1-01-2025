#include <stdio.h>

int main() {
    int original[10];
    int invertido[10];

    printf("Digite 10 numeros inteiros: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &original[i]);
    }

    for(int i = 0; i < 10; i++) {
        invertido[i] = original[9 - i];
    }

    printf("Vetor invertido: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", invertido[i]);
    }
    printf("\n");

    return 0;
}