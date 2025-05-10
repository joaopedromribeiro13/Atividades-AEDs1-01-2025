#include <stdio.h>
int main() {
    char str[100];
    int i = 0, fim;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    fim = i - 1;

    printf("String invertida: ");
    for (int j = fim; j >= 0; j--) {
        putchar(str[j]);
    }

    printf("\n");
return 0;
}