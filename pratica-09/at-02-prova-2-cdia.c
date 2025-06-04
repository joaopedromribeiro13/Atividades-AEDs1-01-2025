#include <stdio.h>
#include <string.h>

#define TAM 201 // 200 + 1 para o '\0'

// Função recursiva usando aritmética de ponteiros
int contar_caractere(char *str, char letra) {
    if (*str == '\0') {
        return 0; // caso base: fim da string
    }
    // Verifica se o caractere atual é igual à letra
    if (*str == letra) {
        return 1 + contar_caractere(str + 1, letra);
    } else {
        return contar_caractere(str + 1, letra);
    }
}

int main() {
    char texto[TAM];
    char letra;

    // Lê a string
    printf("Digite uma string (até 200 caracteres): ");
    fgets(texto, TAM, stdin);

    // Remove o '\n' do final, se existir
    size_t len = strlen(texto);
    if (len > 0 && texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
    }

    // Lê a letra a ser buscada
    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &letra); // o espaço antes de %c ignora caracteres pendentes

    // Chama a função recursiva
    int ocorrencias = contar_caractere(texto, letra);

    // Exibe o resultado
    printf("A letra '%c' aparece %d vez(es) na string.\n", letra, ocorrencias);

    return 0;
}
