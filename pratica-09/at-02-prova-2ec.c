#include <stdio.h>

int contarVogais(char *str) {
    if (*str == '\0') {
        return 0; 
    }

    int ehVogal = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    return ehVogal + contarVogais(str + 1);
}

int main() {
    char texto[101];  

    printf("Digite uma string (até 100 caracteres): ");
    fgets(texto, sizeof(texto), stdin); 

    int totalVogais = contarVogais(texto);

    printf("Número de vogais: %d\n", totalVogais);

    return 0;
}
