#include <stdio.h>
#include <stdlib.h>

// Imprime o maior e o menor valor de um vetor de 5 posições

int main()
{
    int x[5], maior, menor, i;

    for (i = 0; i < 5; ++i)
    {
        printf(" A[%d]: ", i);
        scanf("%d", &x[i]);
    }
    maior = x[0];
    menor = x[0];
    for (i = 0; i < 5; ++i)
    {
        if (x[i] > maior)
            maior = x[i];
        if (x[i] < menor)
            menor = x[i];
    }
    printf("\n Maior: %d\n", maior);
    printf(" Menor: %d\n", menor);
    return 0;
}