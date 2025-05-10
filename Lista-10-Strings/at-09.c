#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int i;
    const int deslocamento = 3;

    printf("Digite o texto a ser criptografado: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    for(i = 0; i < strlen(texto); i++) {
        if(texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] + deslocamento;
            if(texto[i] > 'Z') {
                texto[i] = texto[i] - 26;
            }
        }
        else if(texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = texto[i] + deslocamento;
            if(texto[i] > 'z') {
                texto[i] = texto[i] - 26; 
            }
        }
    }
    printf("Texto criptografado: %s\n", texto);
return 0;
}