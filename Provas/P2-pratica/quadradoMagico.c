/*
Arnaldo e Bernardo são dois garotos que compartilham um peculiar gosto por curiosidades matemáticas. 
Nos últimos tempos, sua principal diversão tem sido investigar propriedades matemágicas de tabuleiros quadrados preenchidos com inteiros. 
Recentemente, durante uma aula de matemática, os dois desafiaram os outros alunos da classe a criar quadrados mágicos, que são quadrados preenchidos com números de 1 a N2, de tal forma que a soma dos N números em uma linha, coluna ou diagonal principal do quadrado tenham sempre o mesmo valor.
A ordem de um quadrado mágico é o seu número de linhas, e o valor do quadrado mágico é o resultado da soma de uma linha.
*/
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int quadrado[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &quadrado[i][j]);
        }
    }
    int valor = 0;
    for (int j = 0; j < N; j++) {
        valor += quadrado[0][j];
    }
    int eh_magico = 1;
    for (int i = 0; i < N; i++) {
        int soma_linha = 0;
        for (int j = 0; j < N; j++) {
            soma_linha += quadrado[i][j];
        }
        if (soma_linha != valor) {
            eh_magico = 0;
            break;
        }
    }
    if (eh_magico) {
        for (int j = 0; j < N; j++) {
            int soma_coluna = 0;
            for (int i = 0; i < N; i++) {
                soma_coluna += quadrado[i][j];
            }
            if (soma_coluna != valor) {
                eh_magico = 0;
                break;
            }
        }
    }
    if (eh_magico) {
        int soma_diagonal1 = 0;
        int soma_diagonal2 = 0;
        for (int i = 0; i < N; i++) {
            soma_diagonal1 += quadrado[i][i];
            soma_diagonal2 += quadrado[i][N - i - 1];
        }
        if (soma_diagonal1 != valor || soma_diagonal2 != valor) {
            eh_magico = 0;
        }
    }
    if (eh_magico) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
    return 0;
}