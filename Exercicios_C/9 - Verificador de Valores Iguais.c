#include <stdio.h>
#include <stdlib.h>

// Verifica e imprime os números repetidos em um vetor de 10 posições

int main()
{

    int vet[10], i, j;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 11; j++)
        {
            if (vet[i] == vet[j + 1])
            {
                printf("\nNúmeros repetidos: %d ", vet[i]);
            }
            else
            {
                printf("\t ");
            }
        }
    }
    return 0;
}