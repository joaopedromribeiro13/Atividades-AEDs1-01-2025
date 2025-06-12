#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

Data gerarDataAleatoria() {
    Data d;
    d.ano = 2000 + rand() % 25; 
    d.mes = 1 + rand() % 12;    
    d.dia = 1 + rand() % 30; 
    return d;
}


void limparEnter(char *str) {
    size_t len = strlen(str);
    if(len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
}

int main() {
    Pessoa vetor[10];
    srand(time(NULL)); 

    for(int i = 0; i < 10; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);
        limparEnter(vetor[i].nome);

        printf("Digite a altura (em cm) da pessoa %d: ", i+1);
        scanf("%d", &vetor[i].altura);
        getchar();

        vetor[i].nascimento = gerarDataAleatoria();
    }

    printf("\nDados armazenados:\n");
    for(int i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("  Nome: %s\n", vetor[i].nome);
        printf("  Altura: %d cm\n", vetor[i].altura);
        printf("  Data de nascimento: %02d/%02d/%04d\n",
               vetor[i].nascimento.dia,
               vetor[i].nascimento.mes,
               vetor[i].nascimento.ano);
    }

    return 0;
}
