#include <stdio.h>

void converteTempo(int segundos, int *horas, int *minutos, int *segRestantes) {
    *horas = segundos/3600;
    *minutos = (segundos%3600) / 60;
    *segRestantes = segundos%60;
}

int main() {
    int segundos, horas, minutos, segRestantes;

    printf("Digite um numero: ");
    scanf("%d", &segundos);

    converteTempo(segundos, &horas, &minutos, &segRestantes);

    printf("%02d:%02d:%02d\n", horas, minutos, segRestantes);

return 0;
}