/*
Leia 2 valores inteiros e armazene-os nas variáveis A e B. 
Efetue a soma de A e B atribuindo o seu resultado na variável X. 
Imprima X conforme exemplo apresentado abaixo. 
*/

#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int x = a + b;
    printf("X = %d\n", x);
}