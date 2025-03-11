#include <stdio.h>

int main() {
    int num, positivos = 0, negativos = 0, total = 0;
    float percPositivos, percNegativos;

    printf("Digite números inteiros (digite 0 para encerrar):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num > 0) {
            positivos++;
        } else {
            negativos++;
        }

        total++;
    }

    if (total > 0) {
        percPositivos = (positivos * 100.0) / total;
        percNegativos = (negativos * 100.0) / total;
    } else {
        percPositivos = percNegativos = 0;
    }

    printf("Total de números positivos: %d (%.2f%%)\n", positivos, percPositivos);
    printf("Total de números negativos: %d (%.2f%%)\n", negativos, percNegativos);

    return 0;
}
