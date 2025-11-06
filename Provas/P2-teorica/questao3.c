/*
O que fazer:

Escreva uma função em C que filtre nomes que comecem com uma letra específica.

A função deve receber:

Um vetor de strings (nomes), com no máximo 50 caracteres cada;

A quantidade total de nomes;

A letra inicial desejada;

Um vetor de saída para guardar os nomes que começam com essa letra (sem diferenciar maiúscula de minúscula).

O que a função deve retornar:

O total de nomes encontrados que começam com essa letra.

Importante:

Não use funções da biblioteca <string.h> (como strcmp, strcpy, etc.).

Protótipo da função:

int filtrarNomesPorInicial(char nomes[][51], int quantidade, char inicial, char resultado[][51]);
*/

#include <stdio.h>
int filtrarNomesPorInicial(char nomes[][51], int quantidade, char inicial, char resultado[][51]) {
    int count = 0;
    for (int i = 0; i < quantidade; i++) {
        char primeira_letra = nomes[i][0];
        if (primeira_letra == inicial || primeira_letra == inicial + ('a' - 'A')) {
            int j = 0;
            while (nomes[i][j] != '\0') {
                resultado[count][j] = nomes[i][j];
                j++;
            }
            resultado[count][j] = '\0';
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    printf("Digite a quantidade de nomes: ");
    scanf("%d", &n);
    char nomes[100][51];
    printf("Digite os nomes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", nomes[i]);
    }
    char inicial;
    printf("Digite a letra inicial desejada: ");
    scanf(" %c", &inicial);
    char resultado[100][51];
    int total_encontrados = filtrarNomesPorInicial(nomes, n, inicial, resultado);
    printf("Nomes que começam com '%c':\n", inicial);
    for (int i = 0; i < total_encontrados; i++) {
        printf("%s\n", resultado[i]);
    }
    return 0;
}