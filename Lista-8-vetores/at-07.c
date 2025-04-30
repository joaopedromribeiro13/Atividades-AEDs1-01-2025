#include <stdio.h>

int main() {
    int vetor[5];
    int repetidos[5] = {0};
    int contagem;

    printf("Digite 5 numeros inteiros: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 5; i++) {
        
        if(repetidos[i] == 1) continue;
        
        contagem = 1; 
        
        for(int j = i + 1; j < 5; j++) {
            if(vetor[i] == vetor[j]) {
                contagem++;
                repetidos[j] = 1;
            }
        }

        if(contagem > 1) {
            printf("O numero %d aparece %d vezes\n", vetor[i], contagem);
        }
    }

return 0;
}