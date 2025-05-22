#include <stdio.h>

int main() {
    char linha[256];

    freopen("entrada.txt", "r", stdin);

    freopen("saida.txt", "w", stdout);

    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        printf("%s", linha); 
    }

    return 0;
}
