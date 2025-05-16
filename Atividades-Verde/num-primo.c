#include <stdio.h>

int main() {
    int maior, menor;

    do {
        scanf("%d", &menor);
        scanf("%d", &maior);
    } while (menor >= maior);

    for (int i = menor + 1; i < maior; i++) {
        int ehPrimo = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                ehPrimo = 0;
                break;
            }
        }

        if (ehPrimo && i > 1) {
            printf("%d ", i);
        }
    }

    return 0;
}