#include <stdio.h>
#include <stdlib.h>

// Calcula e imprime a média de 10 valores inteiros

int main()
{
    int x[10], i;
    float media, soma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &x[i]);
        soma = soma + x[i];
    }
    media = soma / 10;
    printf("A média é: %.2f", media);
    return 0;
}