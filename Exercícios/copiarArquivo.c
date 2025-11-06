#include <stdio.h>

int main() {
    FILE *in = fopen("entrada.txt", "r");
    FILE *out = fopen("saida.txt", "w");
    char c;
    while ((c = fgetc(in)) != EOF)
        fputc(c, out);
    fclose(in);
    fclose(out);
}
