#include <stdio.h>

void maiorMenor(int a, int b, int *maior, int *menor) {
    if (a > b) {
        *maior = a;
        *menor = b;
    } else {
        *maior = b;
        *menor = a;
    }

}

int main() {
    int a, b , maior, menor;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    maiorMenor(a, b, &maior, &menor);

    printf("O maior eh: %d\n", maior);

    printf("O menor eh: %d", menor);
}