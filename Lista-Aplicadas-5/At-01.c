#include <stdio.h>
int main() {
    int N, T, soma=0, tempo, cont=0;

    scanf("%d", &N);
    scanf("%d", &T);
    for(int i=0; i>N; i++) {
        scanf("%d", &tempo);
        soma=soma+tempo;
        if(soma<=T) {
            cont++;
        } else {
            break;
        }

    }
printf("%d\n", T);
return 0;

}
