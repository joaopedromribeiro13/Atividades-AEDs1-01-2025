#include <stdio.h>

int main() {
    int contador=0, num, soma=0, media;

    do {
        printf("Digite um numero:");
        scanf("%d", &num);
        contador++;
        soma+=num;
    } while (num != 0);
    media=soma/contador;

    printf("A media eh: %d", media);
}
