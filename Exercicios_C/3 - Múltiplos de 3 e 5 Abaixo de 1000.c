#include <stdio.h>
#include <stdlib.h>

// Imprime a soma de todos os múltiplos de 3 e 5 abaixo de 1000

int main()
{
    int x = 3, z = 5, res = 0;

    for (int i = 0; i < 1000; i++)
    {
        if ((i % x == 0 || i % z == 0))
        {
            res = res + i;
        }
    }
    printf("A soma dos múltiplos de 3 e 5 abaixo de 1000, : %d", res);
    return 0;
}