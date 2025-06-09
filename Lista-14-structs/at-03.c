#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[30];
    int altura;
    Data nascimento;
} Pessoa;



int main() {
    Pessoa vetor[10];
    for(int i; i<10; i++) {
        printf("Digite o nome: ");
        scanf("%[^\n]", vetor[i].nome);
        fflush(stdin);
        printf("Digite a altura: ");
        scanf("%d", vetor[i].altura);

        //continuar a Data para cada vetor
    }
}