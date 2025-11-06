#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; float soma = 0;
    scanf("%d", &n);
    float *v = malloc(n * sizeof(float));
    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }
    printf("Média = %.2f\n", soma / n);
    free(v);
}
