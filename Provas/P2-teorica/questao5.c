/*
O que fazer:
Crie um programa em C para guardar e analisar os dados de vendas de N produtos ao longo dos 4 trimestres do ano.

O que o programa deve fazer:
Mostrar qual produto teve a maior receita total no ano.
Mostrar qual trimestre teve a maior receita total, considerando todos os produtos.
Organize seu programa com funções.
Escreva o programa principal para testar as suas funções.

Protótipos das funções:
void lerVendas(float vendas[][4], int n);
int encontrarProdutoMaiorReceita(float vendas[][4], int n);
int encontrarTrimestreMaiorReceita(float vendas[][4], int n);
*/

#include <stdio.h>

void lerVendas(float vendas[][4], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite as vendas do produto %d em cada trimestre:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%f", &vendas[i][j]);
        }
    }
}

int encontrarProdutoMaiorReceita(float vendas[][4], int n) {
    int produto = 0;
    float maior = 0;
    for (int i = 0; i < n; i++) {
        float total = 0;
        for (int j = 0; j < 4; j++) {
            total += vendas[i][j];
        }
        if (total > maior) {
            maior = total;
            produto = i;
        }
    }
    return produto;
}

int encontrarTrimestreMaiorReceita(float vendas[][4], int n) {
    int trimestre = 0;
    float maior = 0;
    for (int j = 0; j < 4; j++) {
        float total = 0;
        for (int i = 0; i < n; i++) {
            total += vendas[i][j];
        }
        if (total > maior) {
            maior = total;
            trimestre = j;
        }
    }
    return trimestre;
}

int main() {
    int n;
    printf("Digite o número de produtos: ");
    scanf("%d", &n);
    float vendas[n][4];
    lerVendas(vendas, n);
    int produto = encontrarProdutoMaiorReceita(vendas, n);
    int trimestre = encontrarTrimestreMaiorReceita(vendas, n);
    printf("Produto com maior receita: %d\n", produto + 1);
    printf("Trimestre com maior receita: %d\n", trimestre + 1);
    return 0;
}