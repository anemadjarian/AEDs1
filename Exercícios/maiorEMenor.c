#include <stdio.h>

int main() {
    int v[5], i, maior, menor;
    for (i = 0; i < 5; i++){
        scanf("%d", &v[i]);
    }
    maior = menor = v[0];
    for (i = 1; i < 5; i++) {
        if (v[i] > maior){
            maior = v[i];
        }
        if (v[i] < menor){
            menor = v[i];
        }
    }
    printf("Maior = %d | Menor = %d\n", maior, menor);
}
