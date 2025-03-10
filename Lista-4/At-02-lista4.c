#include <stdio.h>

int main() {
    int n,  soma= 0, num = 1;

    printf("Digite n: ");
    scanf("%d", &n);

    while (soma<n) {
        printf("%d ", num);
        num += 2;
        soma++;
    }

    printf("\n");
    return 0;
}
