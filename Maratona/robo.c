/*
Um fazendeiro comprou um robô-espantalho para espantar os pássaros de sua plantação de milho. 
O robô se move ao longo de um caminho que circunda a plantação. 
No caminho há N estações numeradas sequencialmente, a partir de 1, no sentido horário.
O robô inicia cada dia na estação número 1, e então obedece a uma sequência de comandos. 
Os comandos são gerados por um algoritmo de aprendizagem de máquina que coleta informações através de sensores espalhados na plantação, para garantir uma cobertura de vigia máxima. 
Cada comando faz com que o robô se mova para outra estação, vizinha à estação em que ele se encontra, ou no sentido horário ou no sentido anti-horário. 
O robô permanece nessa nova estação até receber um novo comando.

Apesar da promessa de que o robô protegeria a plantação, ao final de um determinado dia o fazendeiro notou que parte de sua plantação estava devastada por pássaros. 
O fazendeiro agora quer entender melhor o que aconteceu.

Dados o número da estação mais próxima à área devastada e a sequência de comandos que o robô obedeceu naquele dia, escreva um programa para determinar quantas vezes o robô permaneceu na estação mais próxima à àrea devastada.
*/
#include <stdio.h>
int main() {
    int N, M, estacao_devastada;
    scanf("%d %d %d", &N, &M, &estacao_devastada);
    int posicao = 1;
    int contador = 0;
    for (int i = 0; i < M; i++) {
        char comando;
        scanf(" %c", &comando);
        if (comando == 'C') {
            posicao++;
            if (posicao > N) {
                posicao = 1;
            }
        } else if (comando == 'A') {
            posicao--;
            if (posicao < 1) {
                posicao = N;
            }
        }
        if (posicao == estacao_devastada) {
            contador++;
        }
    }
    printf("%d\n", contador);
    return 0;
}