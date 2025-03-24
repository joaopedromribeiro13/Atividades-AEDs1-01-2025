#include <stdio.h>

int main() {
    int contador=0, contImpar=0, num, soma=0, media;

    do {
        printf("Digite um numero:");
        scanf("%d", &num);
        contador++;
        soma+=num;

        if(num%2 != 0) {
            contImpar++;
        }
    } while (num != 0);
    media=soma/contador;


    printf("A media eh: %d", media);
    printf("\nA quantidade de numeros impares eh: %d", contImpar);
}
