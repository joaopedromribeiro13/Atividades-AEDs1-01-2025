#include <stdio.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} DataNascimento;

typedef struct {
    char nome[51];
    int idade;
    char sexo;
    char cpf[15]; // formato: 000.000.000-00
    DataNascimento nascimento;
    int codigoSetor; // entre 0 e 99
    char cargo[31];
    float salario;
} Funcionario;

int main() {
    Funcionario f;

    // Leitura dos dados
    printf("Digite o nome do funcionário: ");
    fgets(f.nome, sizeof(f.nome), stdin);
    f.nome[strcspn(f.nome, "\n")] = '\0';

    printf("Digite a idade: ");
    scanf("%d", &f.idade);

    getchar(); // limpar \n do buffer

    printf("Digite o sexo (M/F): ");
    scanf("%c", &f.sexo);

    getchar(); // limpar \n do buffer

    printf("Digite o CPF (somente números ou com pontuação): ");
    fgets(f.cpf, sizeof(f.cpf), stdin);
    f.cpf[strcspn(f.cpf, "\n")] = '\0';

    printf("Digite a data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &f.nascimento.dia, &f.nascimento.mes, &f.nascimento.ano);

    printf("Digite o código do setor (0 a 99): ");
    scanf("%d", &f.codigoSetor);

    getchar(); // limpar \n do buffer

    printf("Digite o cargo: ");
    fgets(f.cargo, sizeof(f.cargo), stdin);
    f.cargo[strcspn(f.cargo, "\n")] = '\0';

    printf("Digite o salário: R$ ");
    scanf("%f", &f.salario);

    // Exibição dos dados
    printf("\n===== DADOS DO FUNCIONÁRIO =====\n");
    printf("Nome: %s\n", f.nome);
    printf("Idade: %d\n", f.idade);
    printf("Sexo: %c\n", f.sexo);
    printf("CPF: %s\n", f.cpf);
    printf("Data de Nascimento: %02d/%02d/%04d\n", f.nascimento.dia, f.nascimento.mes, f.nascimento.ano);
    printf("Código do Setor: %02d\n", f.codigoSetor);
    printf("Cargo: %s\n", f.cargo);
    printf("Salário: R$ %.2f\n", f.salario);

    return 0;
}
