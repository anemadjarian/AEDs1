#include <stdio.h>

int main() {
    FILE *f = fopen("dados.txt", "w");
    fprintf(f, "Olá, arquivo!\n");
    fclose(f);
}
