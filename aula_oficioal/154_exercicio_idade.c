#include <stdio.h>
# include <string.h>

// Problema "idades"
// Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
// nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.
// Exemplo:
// Dados da primeira pessoa:
// Nome: Maria Silva
// Idade: 19
// Dados da segunda pessoa:
// Nome: Joao Melo
// Idade 20
// A idade média de Maria Silva e Joao Melo é de 19.5 anos


void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
};


void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
};


int main() {
    char nome_1[50], nome_2[50];
    int idade_1, idade_2;
    double idade_media;

    printf("Insira os dados da primeira pessoa\n ");
    printf("Digite o valor do nome 1: ");
    fgets(nome_1, 50, stdin);

    printf("Digite a idade 1: ");
    scanf("%d", &idade_1);

    printf("Insira os dados da segunda pessoa\n ");
    printf("Digite o valor do nome 2: ");
    limpar_entrada();
    fgets(nome_2, 50, stdin);

    printf("Digite a idade 2: ");
    scanf("%d", &idade_2);

    idade_media = (double)(idade_1 + idade_2) / 2;
    printf("\nValor idade Media de %s e %s é de = %.2lf", nome_1, nome_2, idade_media);
};
