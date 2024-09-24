# include <stdio.h>
# include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
};


void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
};


int main() {
    int idade;
    double salario, altura;
    char genero;
    char nome1[50], nome2[50], nome3[50];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);

    printf("Digite o valor da salario: ");
    scanf("%lf", &salario);

    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);

    // When you type your altura and press Enter (e.g., 25\n), the number 25 is read and stored in the variable age, but the newline character \n is left in the input buffer.

    printf("Digite o valor do genero: ");
    limpar_entrada();
    scanf("%c", &genero);

    printf("Digite o valor do nome 1: ");
    limpar_entrada();
    fgets(nome1, 50, stdin);
    strtok(nome1, "\n");

    printf("Digite o valor do nome 2: ");
    // limpar_entrada();
    fgets(nome2, 50, stdin);
    strtok(nome2, "\n");

    printf("Digite o valor do nome 3: ");
    ler_texto(nome3, 50);

    printf("Idade = %d\n", idade);
    printf("Salario = %.2lf\n", salario);
    printf("Altura = %.2lf\n", altura);
    printf("Genero = %c\n", genero);
    printf("Nome 1 = %s\n", nome1);
    printf("Nome 2 = %s\n", nome2);
    printf("Nome 3 = %s\n", nome2);

    return 0;
};