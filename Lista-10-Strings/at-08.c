#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *ptr = str1;
    int count = 0;
    int len2;

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    len2 = strlen(str2);

    if (len2 == 0) {
        printf("A segunda string esta vazia.\n");
        return 0;
    }

    while ((ptr = strstr(ptr, str2)) != NULL) {
        count++;
        ptr += len2;
    }

    printf("'%s' aparece %d vezes em '%s'\n", str2, count, str1);
return 0;
}