#include <stdio.h>
#include <stdlib.h>

// Realiza a soma de um vetor de 4 posições com números de 1 a 4

int main()
{
    float x[4];
    int j, k, i[4];
    i[0] = 1;
    i[1] = 2;
    i[2] = 3;
    i[3] = 4;

    for (j = 0; j < 4; j++)
    {
        printf("Digite um número: ");
        scanf("%f", &x[j]);
    }
    for (j = 0; j < 4; j++)
    {
        x[j] = x[j] + i[j];
        printf("A soma é: %.2f\n", x[j]);
    }
    return 0;
}