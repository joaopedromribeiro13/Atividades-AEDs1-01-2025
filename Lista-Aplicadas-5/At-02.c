#include <stdio.h>

int main() {
    int N, byte, bit, count=0;

    scanf("%d", &N);

    for(int i; i<N; i++) {}
        scanf("%d", &byte);

        for(bit=0; bit<8; bit++) {
            if((byte>>bit) & 1) {
                count++;
            }
        }
    if(count%2 == 0){
        printf("PAR\n");
    } else {
        printf("IMPAR\n");
    }
}
