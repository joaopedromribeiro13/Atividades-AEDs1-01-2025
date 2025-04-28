#include <stdio.h>

void atualizaNota(float *nota) {
    *nota = *nota + 0.5;

    if (*nota > 10) {
        *nota = 10;
    }
}

int main() {
    float nota;

    printf("Digite a nota ate 10: ");
    scanf("%f", &nota);

    atualizaNota(&nota);

    printf("A nota eh %.1f", nota);

return 0;
}