#include <stdio.h>

int main() {
    FILE *f = fopen("dados.txt", "r");
    char texto[100];
    while (fgets(texto, 100, f))
        printf("%s", texto);
    fclose(f);
}
