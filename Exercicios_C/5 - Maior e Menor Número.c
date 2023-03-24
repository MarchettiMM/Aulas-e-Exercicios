#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, maior=0, menor=100000;
    while (x>=0){
        printf("Digite um numero positivo, para encerrar, digite um negativo: ");
        scanf("%d", &x);
        if (x >= 0){
            if (x > maior){
                maior = x;
            }
            if (x < menor){
                menor = x;
            }
        }
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
