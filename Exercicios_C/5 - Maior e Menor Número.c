#include <stdio.h>
#include <stdlib.h>

// Imprime o maior e o menor número de uma lista encerrada ao digitar um valor negativo

int main()
{
    int x, maior = 0, menor = 100000;

    while (x >= 0)
    {
        printf("Digite um número positivo. Para encerrar, digite um negativo: ");
        scanf("%d", &x);
        if (x >= 0)
        {
            if (x > maior)
            {
                maior = x;
            }
            if (x < menor)
            {
                menor = x;
            }
        }
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    return 0;
}