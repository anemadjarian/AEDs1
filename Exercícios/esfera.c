/*
Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). 
A fórmula para calcular o volume é: (4/3) * pi * R3. 
Considere (atribua) para pi o valor 3.14159.
*/

#include<stdio.h>

int main(){
    double R;
    scanf("%lf", &R);
    double pi = 3.14159;
    double volume = (4.0/3.0) * pi * (R * R * R);
    printf("VOLUME = %.3lf\n", volume);
}