#include <stdio.h>
#include <stdlib.h>

// Calcula a subtração de cada elemento de 2 vetores

int main()
{
    int vet1[10], vet2[10], vet3[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor do primeiro vetor: ");
        scanf("%d", &vet1[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor do segundo vetor: ");
        scanf("%d", &vet2[i]);
    }
    for (i = 0; i < 10; i++)
    { /*esse for faz a soma e imprime*/
        vet3[i] = vet1[i] - vet2[i];
        printf("\nA subtração dos vetores e: %d ", vet3[i]);
    }
    printf("\n\n");
    return 0;
}