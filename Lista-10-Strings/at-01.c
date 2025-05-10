#include <stdio.h>
int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("Voce digitou: %s", str);
return 0;
}