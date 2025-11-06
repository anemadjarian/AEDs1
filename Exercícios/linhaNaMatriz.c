/*
Neste problema você deve ler um número, indicando uma linha da matriz na qual uma operação deve ser realizada, um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso.
*/
#include <stdio.h>

int main() {
    int linha;
    char operacao;
    double M[12][12], soma = 0;
    int count = 0;

    scanf("%d %c", &linha, &operacao);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int j = 0; j < 12; j++) {
        if (linha < 12 && j < 12) {
            soma += M[linha][j];
            count++;
        }
    }

    if (operacao == 'S') {
        printf("%.1lf\n", soma);
    } else if (operacao == 'M') {
        printf("%.1lf\n", soma / count);
    }

    return 0;
}
