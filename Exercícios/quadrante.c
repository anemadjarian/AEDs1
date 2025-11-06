/*
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. 
Para cada ponto escrever o quadrante a que ele pertence. 
O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).
*/

#include <stdio.h>

int main() {
    double x, y;
    while (1) {
        scanf("%lf %lf", &x, &y);
        if (x == 0 || y == 0) {
            break;
        }
        if (x > 0 && y > 0) {
            printf("Q1\n");
        } else if (x < 0 && y > 0) {
            printf("Q2\n");
        } else if (x < 0 && y < 0) {
            printf("Q3\n");
        } else {
            printf("Q4\n");
        }
    }
    return 0;
}
