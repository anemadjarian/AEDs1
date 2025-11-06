/*
A Olimpíada Municipal de Programação vai distribuir camisetas para os melhores colocados, e por isso solicitou que os premiados informassem o tamanho preferido da camiseta, entre os tamanhos pequeno e médio.
A empresa que confeccionou as camisetas, por uma falha, pode ter se enganado na quantidade de camisetas para cada tamanho. 
Foram produzidas camisetas em número suficiente para todos os premiados, mas talvez não do tamanho preferido.
Dadas a lista com os tamanhos preferidos pelos premiados e a quantidade de camisetas de cada tamanho produzidas pela empresa, escreva um programa para determinar se todos os premiados receberão camisetas do tamanho escolhido.
*/

#include <stdio.h>
int main() {
    int n, p, m;
    scanf("%d %d %d", &n, &p, &m);
    int tamanho;
    int pequenas = 0, medias = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &tamanho);
        if (tamanho == 1) {
            pequenas++;
        } else if (tamanho == 2) {
            medias++;
        }
    }
    if (pequenas <= p && medias <= m) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}