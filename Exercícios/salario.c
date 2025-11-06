/*
Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. 
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
*/
#include<stdio.h>

int main(){
    int numero;
    double horas_trabalhadas;
    double valor_por_hora;
    scanf("%d", &numero);
    scanf("%lf", &horas_trabalhadas);
    scanf("%lf", &valor_por_hora);
    double salario = horas_trabalhadas * valor_por_hora;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = %.2lf\n", salario);
}