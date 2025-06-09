#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char autor[50];
    int anoPublicacao;
} Livro;

void imprimirPessoa(Livro n) {
printf("Livro: %s\n", n.titulo);
printf("Autor: %s\n", n.autor);
printf("Autor: %d\n", n.anoPublicacao);
}


int main() {
    Livro n;

    printf("Titulo do livro:");
    fgets(n.titulo, 100, stdin);
    printf("Nome do autor:");
    fgets(n.autor, 100, stdin);
    printf("Ano de publicação:");
    scanf("%d", &n.anoPublicacao);

    imprimirPessoa(n);
return 0;
}