#include <stdio.h>

int main() {
    int N, i;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (i=0; i<N; i++) {
        printf("Digite o valor? ");

        // scanf trabalha com edereço do vetor
        scanf("%lf", &vet[i]);
    };

    printf("\nNUMEROS DIGITADOS:\n");
    for (i=0; i<N; i++) {
        printf("%.lf\n", vet[i]);
    }

    return 0;
}
