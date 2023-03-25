#include <stdio.h>
#include <stdlib.h>

// Procedimento Bubble Sort
void bubble_sort(int vetor[], int tamanho)
{
    int i, j, aux;

    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - i - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

// Realiza a ordenada crescente de um vetor por Bubble Sort

int main()
{
    int vetor[10];
    int i;

    printf("Insira 10 números inteiros:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    bubble_sort(vetor, 10);

    printf("O vetor ordenado é:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}