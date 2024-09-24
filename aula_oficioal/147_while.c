#include <stdio.h>
#include <string.h>

int main() {
    int x, soma;

    soma = 0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    while(1) {
        soma = soma + x;
        printf("A soma total é %d\n", soma);

        printf("Para continuar digite outro numero, parar digite 0: ");
        scanf("%d", &x);

        if (x == 0) {
            break;
        }
    };

    return 0;
}
