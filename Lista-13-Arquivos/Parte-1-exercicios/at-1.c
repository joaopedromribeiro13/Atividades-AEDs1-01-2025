#include <stdio.h>
int main(){
    FILE *arquivo;

    arquivo=fopen("dados.txt", "w");
    if (arquivo==NULL){
    printf("Erro ao abrir o arquivo");
    return 1;
    }

    char nome[50];
    int idade;

    for(int i=0; i<3; i++) {
    printf("Digite primeiro nome e idade: ");
    scanf("%s, %d", nome, idade);

    fprintf(arquivo, "%s %d\n", nome, idade);
    }
fclose(arquivo);
printf("Dados gravados com sucesso");
return 0;
}