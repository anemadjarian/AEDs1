/*
Escreva um programa em C que leia a matrícula de um número indeterminado de alunos. A leitura das matrículas deve continuar até que o usuário digite um valor negativo, indicando o fim da entrada.

Para cada aluno, o programa deve solicitar a digitação de 20 notas.

Ao final, o programa deve exibir:

A) A média das notas de cada aluno. 
B) O código (matrícula) e a média do aluno com a maior média geral. 
C) O código (matrícula) e a média do aluno com a menor média geral.
*/

#include <stdio.h>
int main() {
    int matricula;
    float maior_media = -1.0, menor_media = 11.0;
    int matricula_maior = -1, matricula_menor = -1;

    while (1) {
        printf("Digite a matrícula do aluno (negativo para sair): ");
        scanf("%d", &matricula);
        if (matricula < 0) break;

        float soma_notas = 0.0;
        for (int i = 0; i < 20; i++) {
            float nota;
            printf("Digite a nota %d: ", i + 1);
            scanf("%f", &nota);
            soma_notas += nota;
        }
        float media = soma_notas / 20.0;
        printf("Média do aluno %d: %.2f\n", matricula, media);

        if (media > maior_media) {
            maior_media = media;
            matricula_maior = matricula;
        }
        if (media < menor_media) {
            menor_media = media;
            matricula_menor = matricula;
        }
    }

    if (matricula_maior != -1) {
        printf("Aluno com maior média: Matrícula %d, Média %.2f\n", matricula_maior, maior_media);
    }
    if (matricula_menor != -1) {
        printf("Aluno com menor média: Matrícula %d, Média %.2f\n", matricula_menor, menor_media);
    }

    return 0;
}