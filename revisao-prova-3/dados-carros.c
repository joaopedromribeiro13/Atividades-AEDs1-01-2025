#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int ano_fabricacao;
    char modelo[30];
    char marca[30];
    int preco;
    Data data_venda;
} carro;