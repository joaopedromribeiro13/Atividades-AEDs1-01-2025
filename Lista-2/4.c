#include <stdio.h>
int main(void) {
    char nome[50];
    int idade;
    float altura;

    printf("Digite seu nome:");
    fgets(nome, 50, stdin);
    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("Digite sua altura em metros:");
    scanf("%f", &altura);

    printf("Seu nome: %s", nome);
    printf("Sua idade: %d anos\n", idade);
    printf("Sua altura: %f metros", nome);    



    return 0;

}