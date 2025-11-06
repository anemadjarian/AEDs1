#include <stdio.h>

int main() {
    int v[5], soma = 0;
    for (int i = 0; i < 5; i++){
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 5; i++){
        soma += v[i];
    }
    printf("Soma = %d\n", soma);
}
