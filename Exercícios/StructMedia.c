#include <stdio.h>

struct Aluno {
    char nome[50];
    float nota;
};

int main() {
    struct Aluno turma[3];
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        scanf("%s %f", turma[i].nome, &turma[i].nota);
        soma += turma[i].nota;
    }
    printf("Média da turma: %.2f\n", soma / 3);
}
