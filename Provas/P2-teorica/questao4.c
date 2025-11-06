/*
O que fazer:Escreva uma função recursiva em C que procure a última vez que um caractere aparece em uma string.A função deve receber:Uma string s.Um caractere c.O que a função deve retornar:Um ponteiro para a última ocorrência de c em s, ou NULL se c não estiver na string.Importante:Não use funções da biblioteca <string.h>.Protótipo da função:char *lastOccur(char *s, char c);
Escreva uma função recursiva em C que procure a última vez que um caractere aparece em uma string.
A função deve receber:
Uma string s.
Um caractere c.
O que a função deve retornar:
Um ponteiro para a última ocorrência de c em s, ou NULL se c não estiver na string.
Importante:
Não use funções da biblioteca <string.h>.
Protótipo da função:
char *lastOccur(char *s, char c);
*/

#include <stdio.h>

char *lastOccur(char *s, char c) {
    if (*s == '\0') return NULL;
    char *p = lastOccur(s + 1, c);
    if (p != NULL) return p;
    return (*s == c) ? s : NULL;
}
int main() {
    char str[100];
    char ch;
    printf("Digite uma string: ");
    scanf("%s", str);
    printf("Digite um caractere para buscar: ");
    scanf(" %c", &ch);
    char *result = lastOccur(str, ch);
    if (result != NULL) {
        printf("Última ocorrência de '%c' em \"%s' está na posição: %ld\n", ch, str, result - str);
    } else {
        printf("Caractere '%c' não encontrado em \"%s\"\n", ch, str);
    }
    return 0;
}