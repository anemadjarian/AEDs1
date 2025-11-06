#include <stdio.h>
#include <string.h> 

struct Aluno {
    char nome[50];
    float nota;
} Aluno;

int main() {
    Aluno a;
    char[50] nome;
    float nota;
    scanf("%s", nome);
    scanf("%f", &nota);
    strcpy(a.nome, nome);
    a.nota=nota;
    printf("%s tirou %.1f\n", a.nome, a.nota);
}
