#include <stdio.h>
# include <string.h>

int main() {
    int divised;
    char tick_tack[20] = "";
    char tick[5] = "Tick";
    char tack[5] = "Tack";

    printf("Forneça dois números inteiros, se for divido por 2 retorna tick, se for dividido por 3, retornara tack: \n");

    printf("Forneça um numero: ");
    scanf("%d", &divised);

    if (divised % 2 == 0) {
        strcat(tick_tack, tick);
    };

    if (divised % 3 == 0) {
        strcat(tick_tack, tack);
    };

    printf("%s\n", tick_tack);

    return 0;
}
