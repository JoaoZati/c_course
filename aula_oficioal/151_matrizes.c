#include <stdio.h>

int main() {
    int M, N, i, j;

    printf("Quantas linhas na matriz i? ");
    scanf("%d", &M);

    printf("Quantas colunas na matriz i? ");
    scanf("%d", &N);

    int mat[M][N];

    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        };
    };

    printf("\nMatriz Digitada:\n");
    for (i=0; i<M; i++) {
        for (j = 0; j < N; j++) {
            printf("Valor do Elemento: %d ", mat[i][j]);
        };
        printf("\n");
    };
};
