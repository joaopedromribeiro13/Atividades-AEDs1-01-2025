#include <stdio.h>

int main() {
    char *str[100];

    printf("Escreva uma palavra:\n");
    scanf("%s", &str);

    if(*str=="\0") {
        return 0;
    }
}