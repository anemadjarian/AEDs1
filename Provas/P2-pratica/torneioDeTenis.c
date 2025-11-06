/*
A prefeitura contratou um novo professor para ensinar as crianças do bairro a jogar tênis na quadra de tênis do parque municipal. 
O professor convidou todas as crianças do bairro interessadas em aprender a jogar tênis. 
Ao final do primeiro mês de aulas e treinamentos foi organizado um torneio em que cada participante disputou exatamente seis jogos. 
O professor vai usar o desempenho no torneio para separar as crianças em três grupos, de forma a ter grupos de treino em que os participantes tenham habilidades mais ou menos iguais, usando o seguinte critério:

participantes que venceram 5 ou 6 jogos serão colocados no Grupo 1;
participantes que venceram 3 ou 4 jogos serão colocados no Grupo 2;
participantes que venceram 1 ou 2 jogos serão colocados no Grupo 3;
participantes que não venceram nenhum jogo não serão convidados a continuar com os treinamentos.

Dada uma lista com o resultado dos jogos de um participante, escreva um programa para determinar em qual grupo ele será colocado.
*/
#include <stdio.h>
int main() {
    char resultados;
    int contV=0, contP=0;
    for(int i=0; i<6; i++){
        scanf(" %c", &resultados);
        if(resultados == 'V'){
            contV++;
        } else if(resultados == 'P'){
            contP++;
        }
    }
    if (contV >= 5) {
        printf("1\n");
    } else if (contV >= 3) {
        printf("2\n");
    } else if (contV >= 1) {
        printf("3\n");
    } else {
        printf("-1\n");
    }
    return 0;
}