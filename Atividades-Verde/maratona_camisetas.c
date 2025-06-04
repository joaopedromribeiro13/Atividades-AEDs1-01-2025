#include <stdio.h>

int main() {
    int N, P, M;
    int Ti, countP = 0, countM = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &Ti);
        if (Ti == 1) {
            countP++;
        } else if (Ti == 2) {
            countM++;
        }
    }

    scanf("%d %d", &P, &M);

    if (P >= countP && M >= countM) {
        printf("S\n"); 
    } else {
        printf("N\n");
    }
return 0;
}