/*
Leia um valor inteiro N. 
Este valor será a quantidade de valores que serão lidos em seguida. 
Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). 
No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int valor;
        scanf("%d", &valor);
        if (valor == 0) {
            printf("NULL\n");
        } else {
            if (valor % 2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }
            if (valor > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }
    return 0;
}