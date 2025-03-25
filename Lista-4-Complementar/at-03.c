#include <stdio.h>

int main() {
    int a, b, encontrouPrimo = 0;
    printf("Digite dois numeros inteiros A e B (A < B): ");
    scanf("%d %d", &a, &b);

    if (a >= b) {
        printf("Erro: A deve ser menor que B.\n");
        return 1;
    }

    for (int num = a; num <= b; num++) {
        if (num < 2) continue;
        int primo = 1;
        for (int divisor = 2; divisor * divisor <= num; divisor++) {
            if (num % divisor == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d ", num);
            encontrouPrimo = 1;
        }
    }
    if (!encontrouPrimo) {
        printf("Nenhum numero primo encontrado no intervalo.");
    }
    return 0;
}
