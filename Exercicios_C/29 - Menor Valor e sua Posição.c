#include <stdio.h>
#include <stdlib.h>
#define tam 4
#define tan 3

// Imprime o menor valor em uma matriz e sua posição

int main()
{
    int mat[tam][tan], i, j, pi = 0, pj = 0, menor = 1000;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tan; j++)
        {
            printf("Informe os valores da matriz 4X3: ");
            scanf("%d", &mat[i][j]);
            system("cls");
        }
    }
    menor = mat[0][0];
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tan; j++)
        {
            if (mat[i][j] < menor)
            {
                menor = mat[i][j];
                pi = i;
                pj = j;
            }
        }
    }
    printf("O menor valor é %d e sua posição atual é\n Linha: %d\n Coluna: %d\n", menor, pi, pj);
    return 0;
}