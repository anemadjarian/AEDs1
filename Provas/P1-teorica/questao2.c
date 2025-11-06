/*
Os habitantes de uma cidade pagam impostos de acordo com as seguintes regras:
Homens com mais de 20 anos pagam impostos.
Mulheres pagam impostos se tiverem entre 18 e 35 anos.
Todos os outros não pagam impostos.
Escreva um algoritmo que pergunte a idade e o gênero M ou F de um residente e exiba se ele ou ela é tributável.
*/

#include <stdio.h>
int main() {
    int idade;
    char genero;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o gênero (M/F): ");
    scanf(" %c", &genero);
    if ((genero == 'M' && idade > 20) || (genero == 'F' && idade >= 18 && idade <= 35)) {
        printf("Tributável\n");
    } else {
        printf("Não tributável\n");
    }
    return 0;
}