#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000];
    int i, palavras = 0;
    int dentro_palavra = 0;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    for(i = 0; texto[i] != '\0'; i++) {
        if(texto[i] == ' ') {
            dentro_palavra = 0; 
        } else {
            if(!dentro_palavra) { 
                palavras++;       
                dentro_palavra = 1; 
            }
        }
    }

    printf("O texto contem %d palavras.\n", palavras);
return 0;
}