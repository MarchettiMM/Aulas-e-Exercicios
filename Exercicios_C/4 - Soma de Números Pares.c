#include <stdio.h>
#include <stdlib.h>

// Imprime a soma dos números pares até o número digitado

int main()
{
    int x, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &x);
    while (x != 0)
    {
        if (x % 2 == 0)
        {
            soma = soma + x;
        }
        x--;
    }
    printf("A soma dos números pares é: %d", soma);
    return 0;
}