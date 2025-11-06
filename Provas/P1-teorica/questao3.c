/*
Escreva uma função em C que calcule e retorne a soma de todos os números entre 1 e 999 (inclusive) que satisfaçam todas as seguintes condições:

O número é divisível por 9.

O número é par.

O dígito das dezenas do número não é 7.

Exemplo: o dígito das dezenas em 753 é 5; o dígito das dezenas em 871 é 7; e o dígito das dezenas de 9 é 0.

O protótipo da função deve ser: int calculaSoma();

Escreva também um programa (main) para testar a sua função.
*/

#include <stdio.h>
int calculaSoma() {
    int soma = 0;
    for (int i = 1; i <= 999; i++) {
        if (i % 9 == 0 && i % 2 == 0) {
            int dezenas = (i / 10) % 10;
            if (dezenas != 7) {
                soma += i;
            }
        }
    }
    return soma;
}

int main() {
    int resultado = calculaSoma();
    printf("A soma é: %d\n", resultado);
    return 0;
}