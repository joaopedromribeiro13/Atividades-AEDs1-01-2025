#include <stdio.h>
int main() {
    char str[100];
    int i = 0, count = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        count++;
        i++;
    }

    printf("A string tem %d caracteres.\n", count);
return 0;
}