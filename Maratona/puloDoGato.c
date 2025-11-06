/*
O gato Obinho gosta de brincar no pátio do colégio, no qual há uma sequência de C lajotas, que podem ser brancas ou pretas.
Obinho está na lajota inicial da sequência (a mais à esquerda), e quer ir pulando até a lajota final da sequência (a mais à direita).
Mas ele só gosta de pular de uma lajota preta para outra lajota preta, nunca pisando numa lajota branca. Além disso, ele não consegue pular muito longe.
Obinho quer chegar na lajota final com o número mínimo de pulos possível. 
Por exemplo, na parte direita da figura, para C=14, o menor número de pulos possível é 8. 
Seu programa deve computar o número mínimo de pulos para o Obinho chegar na lajota final.
*/

#include <stdio.h>

int main() {
    int C, D;
    scanf("%d %d", &C, &D);
    char lajotas[C + 1];
    scanf("%s", lajotas);
    
    int posicao = 0;
    int pulos = 0;
    
    while (posicao < C - 1) {
        int proximo_pulo = D;
        while (proximo_pulo > 0) {
            if (posicao + proximo_pulo < C && lajotas[posicao + proximo_pulo] == '1') {
                posicao += proximo_pulo;
                pulos++;
                break;
            }
            proximo_pulo--;
        }
        if (proximo_pulo == 0) {
            printf("-1\n");
            return 0;
        }
    }
    
    printf("%d\n", pulos);
    return 0;
}