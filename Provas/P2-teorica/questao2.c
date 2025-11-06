/*
O que fazer:

Escreva uma função em C que receba um vetor de números inteiros e o tamanho dele.

O que a função deve fazer:

Ela deve criar um novo vetor, através de alocação dinâmica, com os mesmos números, mas na ordem invertida.

Depois:

Faça um programa para testar se a função está funcionando corretamente.

Protótipo da função: int * contarPares(int v[], int n);
*/

#include <stdio.h>
#include <stdlib.h>
int *contarPares(int v[], int n) {
    int *invertido = (int *)malloc(n * sizeof(int));
    if(invertido == NULL) {
        printf("Erro de alocação de memória\n");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        invertido[i] = v[n - 1 - i];
    }
    return invertido;
}
int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int *v = (int *)malloc(n * sizeof(int));
    if(v == NULL) {
        printf("Erro de alocação de memória\n");
        return 1;
    }
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    int *invertido = contarPares(v, n);
    printf("Vetor invertido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", invertido[i]);
    }
    printf("\n");
    free(v);
    free(invertido);
    return 0;
}