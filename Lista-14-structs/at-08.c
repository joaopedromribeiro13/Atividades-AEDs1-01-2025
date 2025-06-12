#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[51];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

// Função para calcular média de um aluno
float calcularMedia(Aluno a) {
    return (a.nota1 + a.nota2 + a.nota3) / 3.0;
}

int main() {
    Aluno alunos[5];
    int i;

    // (a) Leitura dos dados dos alunos
    for (i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); // limpar \n do buffer

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; // remover \n

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);
    }

    // (b) Aluno com maior nota na primeira prova
    int indice_maior_nota1 = 0;
    for (i = 1; i < 5; i++) {
        if (alunos[i].nota1 > alunos[indice_maior_nota1].nota1) {
            indice_maior_nota1 = i;
        }
    }

    printf("\nAluno com maior nota na primeira prova:\n");
    printf("Nome: %s | Nota 1: %.2f\n", alunos[indice_maior_nota1].nome, alunos[indice_maior_nota1].nota1);

    // (c) Calcular média e encontrar aluno com maior média
    int indice_maior_media = 0;
    float maior_media = calcularMedia(alunos[0]);

    for (i = 1; i < 5; i++) {
        float media = calcularMedia(alunos[i]);
        if (media > maior_media) {
            maior_media = media;
            indice_maior_media = i;
        }
    }

    printf("\nAluno com maior média:\n");
    printf("Nome: %s | Média: %.2f\n", alunos[indice_maior_media].nome, maior_media);

    // (d) Aluno com menor média
    int indice_menor_media = 0;
    float menor_media = calcularMedia(alunos[0]);

    for (i = 1; i < 5; i++) {
        float media = calcularMedia(alunos[i]);
        if (media < menor_media) {
            menor_media = media;
            indice_menor_media = i;
        }
    }

    printf("\nAluno com menor média:\n");
    printf("Nome: %s | Média: %.2f\n", alunos[indice_menor_media].nome, menor_media);

    // (e) Situação de cada aluno
    printf("\nSituação dos alunos:\n");
    for (i = 0; i < 5; i++) {
        float media = calcularMedia(alunos[i]);
        printf("Aluno: %s | Média: %.2f | Situação: %s\n",
               alunos[i].nome,
               media,
               (media >= 6.0) ? "Aprovado" : "Reprovado");
    }

    return 0;
}
