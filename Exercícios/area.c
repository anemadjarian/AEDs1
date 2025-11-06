/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
*/

#include<stdio.h>

int main(){
    double A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    double area_triangulo = (A * C) / 2.0;
    double pi = 3.14159;
    double area_circulo = pi * C * C;
    double area_trapezio = ((A + B) * C) / 2.0;
    double area_quadrado = B * B;
    double area_retangulo = A * B;
    printf("TRIANGULO: %.3lf\n", area_triangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", area_trapezio);
    printf("QUADRADO: %.3lf\n", area_quadrado);
    printf("RETANGULO: %.3lf\n", area_retangulo);
    return 0;
}