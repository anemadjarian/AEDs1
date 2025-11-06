/*
Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). 
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.
*/

#include<stdio.h>

int main(){
    char nome[50];
    double salario_fixo;
    double total_vendas;
    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);
    double comissao = total_vendas * 0.15;
    double total_a_receber = salario_fixo + comissao;
    printf("TOTAL = R$ %.2lf\n", total_a_receber);
}
