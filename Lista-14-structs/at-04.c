#include <stdio.h>

typedef struct {
    char nomeCompanhia[51];
    char areaAtuacao[31];
    float valorAtual;
    float valorAnterior;
    double variacaoPorcentagem;
} Acao;

int main() {
    Acao acao;

    printf("Digite o nome da companhia: ");
    fgets(acao.nomeCompanhia, sizeof(acao.nomeCompanhia), stdin);

    printf("Digite a area de atuacao: ");
    fgets(acao.areaAtuacao, sizeof(acao.areaAtuacao), stdin);

    printf("Digite o valor anterior da acao (abertura): R$ ");
    scanf("%f", &acao.valorAnterior);

    printf("Digite o valor atual da acao: R$ ");
    scanf("%f", &acao.valorAtual);

    // Cálculo da variação percentual
    if (acao.valorAnterior != 0) {
        acao.variacaoPorcentagem = ((acao.valorAtual - acao.valorAnterior) / acao.valorAnterior) * 100.0;
    } else {
        acao.variacaoPorcentagem = 0.0; // Evita divisão por zero
    }

    // Saída dos dados
    printf("\n--- Dados da Ação ---\n");
    printf("Companhia: %s", acao.nomeCompanhia);
    printf("Área de Atuação: %s", acao.areaAtuacao);
    printf("Valor Anterior: R$ %.2f\n", acao.valorAnterior);
    printf("Valor Atual: R$ %.2f\n", acao.valorAtual);
    printf("Variação Percentual: %.2f%%\n", acao.variacaoPorcentagem);

    return 0;
}
