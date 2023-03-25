#include <stdio.h>
#include <stdlib.h>

// Imprime os valores maiores que 10 em uma matriz

int main()
{
    int matriz[4][3];
    int i, j, count = 0;
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] > 10)
            {
                count++;
            }
        }
    }
    printf("A matriz possui %d valores maiores que 10.\n", count);
    return 0;
}