#include <stdio.h>

// Problema: 'terreno'
// Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
// casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
// o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
// duas casas decimais, conforme exemplo.
// Exemplo 1:
// Digite a largura do terreno: 10.0
// Digite o comprimento do terreno: 30.0
// Digite o valor do metro quadrado: 200.00
// Area do terreno = 300.00
// Preco do terreno = 60000.00
// Exemplo 2:
// Digite a largura do terreno: 12.0
// Digite o comprimento do terrano: 20.0
// Digite o valor do metro quadrado: 150.00
// Area do terreno = 240.00
// Preco do terreno = 36000.00

int main() {
    double largura, comprimento, valor_metro_quadrado, area, preco;

    printf("Insira o valor da largura: ");
    scanf("%lf", &largura);

    printf("\nInsira o valor do comprimento: ");
    scanf("%lf", &comprimento);

    printf("\nInsira o valor do metro quadrado ($): ");
    scanf("%lf", &valor_metro_quadrado);

    area = (largura * comprimento);
    preco = (area * valor_metro_quadrado);

    printf("\nValor do terreno ($) = %.2lf", preco);

};
