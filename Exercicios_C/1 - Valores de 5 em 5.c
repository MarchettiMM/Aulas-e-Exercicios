#include <stdio.h>
#include <stdlib.h>

// Imprime valores de 5 em 5

int main()
{
    int x = 0, i = 0;

    while (x != 100)
    {
        x = x + 5;
        printf("%d\n", x);
    }
    return 0;
}