#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char temp;
    int i, j, length;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("String invertida: %s\n", str);
return 0;
}