#include <stdio.h>
#include <stdlib.h>

// Calcula a soma acumulada de um vetor de 10 posições

int main()
{
    int vet[10], soma = 0, i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        soma += vet[i]; // adiciona o valor do elemento atual à soma acumulada
    }
    printf("Soma acumulada dos elementos: %d\n", soma);
    return 0;
}