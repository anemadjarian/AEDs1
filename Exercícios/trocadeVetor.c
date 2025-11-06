/*
Faça um programa que leia um vetor N[20]. 
Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. 
Mostre o vetor modificado.
*/
#include <stdio.h>

int main() {
    int N[20];
    for (int i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
    for (int i = 0; i < 10; i++) {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }
    for (int i = 0; i < 20; i++) {
        printf("%d ", N[i]);
    }
    printf("\n");
    return 0;
}
