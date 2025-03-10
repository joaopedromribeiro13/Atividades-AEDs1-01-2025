#include <stdio.h>

int main() {
    int n, soma = 0, num = 1;

    printf("Digite n: ");
    scanf("%d", &n);

    while (soma < n) {
        if ((num % 3 == 0 && num % 5 == 0) || (num % 7 == 0)) {
            printf("%d ", num);
            soma++;
        }
        num++;
    }

    printf("\n");
    return 0;
}
