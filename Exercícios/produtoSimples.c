/*
Leia dois valores inteiros. 
A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD.
A seguir mostre a variável PROD com mensagem correspondente.
*/

#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int prod = a * b;
    printf("PROD = %d\n", prod);
}