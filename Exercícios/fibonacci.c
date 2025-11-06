/*
Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. 
Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. 
Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.
*/
#include <stdio.h>

int main() {
    unsigned long long int fib[61];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int n;
    scanf("%d", &n);
    if (n >= 0 && n <= 60) {
        printf("%llu\n", fib[n]);
    }
    return 0;
}
