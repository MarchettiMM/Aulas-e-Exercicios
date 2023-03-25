#include <stdio.h>
#include <stdlib.h>

// Cria uma calculadora de juros por investimentos

int main()
{
    float invest = 0, j = 0, total = 0;
    int meses = 0, i = 0;

    printf("=========================================\n");
    printf("= Calculadora de Juros por Investimento =\n");
    printf("=========================================\n");

    printf("Insira o valor do investimento: ");
    scanf("%f", &invest); // Ler o valor desejado do investimento
    printf("Insira uma taxa de juros: ");
    scanf("%f", &j); // Ler a taxa de juros
    printf("Insira a quantidade de meses aplicados: ");
    scanf("%i", &meses); // Ler a quantidade de meses

    total = invest; // Total passa de 0 ao valor fornecido no investimento

    for (i = 0; i < meses; i++)
    {
        total = total + (total * j); // Equacao do calculo do investimento e juros por mes
        printf("O valor total após %i meses é igual a %f\n", (i + 1), total);
    }
    getchar();
    system("pause");
    return 0;
}