#include <stdio.h>

int main() {
    int pA_h, pA_m, cB_h, cB_m, pB_h, pB_m, cA_h, cA_m, T, diferenca_fuso;
    int Minp_A, Minc_B, Minp_B, Minc_A;

    scanf("%d:%d %d:%d %d:%d %d:%d", &pA_h, &pA_m, &cB_h, &cB_m, &pB_h, &pB_m, &cA_h, &cA_m);

    Minp_A = pA_h * 60 + pA_m;
    Minc_B = cB_h * 60 + cB_m;
    Minp_B = pB_h * 60 + pB_m;
    Minc_A = cA_h * 60 + cA_m;

    if (Minc_B - Minp_A < 0) Minc_B += 1440;
    if (Minc_A - Minp_B < 0) Minc_A += 1440;

    T = (Minc_B + Minc_A - Minp_A - Minp_B) / 2;
    diferenca_fuso = (Minc_B - Minp_A - T) / 60;

    printf("%d %d", T, diferenca_fuso);
    return 0;
}