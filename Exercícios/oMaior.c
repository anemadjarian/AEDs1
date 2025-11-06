/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”
*/
#include<stdio.h>

int main(){
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    double maior = a;
    if(b > maior) maior = b;
    if(c > maior) maior = c;
    printf("%.lf eh o maior\n", maior);
    return 0;
}