#include <stdio.h>

int soma_dos_digitos(int n) {
    int soma = 0;
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    int S, A, B;
    scanf("%d %d %d", &S, &A, &B);

    int menor = -1, maior = -1;

    for (int i = A; i <= B; i++) {
        if (soma_dos_digitos(i) == S) {
            if (menor == -1) menor = i;
            maior = i;
        }
    }

    printf("%d\n", menor);
    printf("%d\n", maior);

    return 0;
}
