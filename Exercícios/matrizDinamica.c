#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3, m = 3;
    int **mat = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat[i] = malloc(m * sizeof(int));
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            mat[i][j] = i + j;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    
    for (int i = 0; i < n; i++) free(mat[i]);
    free(mat);
}
