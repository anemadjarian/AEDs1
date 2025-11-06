/*
Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 1/2 + 1/3 + … + 1/100
*/
#include <stdio.h>

int main() {
    double S = 0;
    for (int i = 1; i <= 100; i++) {
        S += 1.0 / i;
    }
    printf("%.2lf\n", S);
    return 0;
}
