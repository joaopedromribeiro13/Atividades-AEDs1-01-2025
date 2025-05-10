#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;
    
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }
    for(j = 0; str2[j] != '\0'; j++) {
        if(str2[j] == '\n') {
            str2[j] = '\0';
            break;
        }
    }

    i = 0;
    while(str1[i] != '\0') {
        i++;
    }

    j = 0;
    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';  
    printf("Strings concatenadas: %s\n", str1);
return 0;
}