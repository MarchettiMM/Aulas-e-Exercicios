#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10], i;
    float media, soma=0;

    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &x[i]);
        soma = soma + x[i];
    }
    media = soma/10;
    printf("A media e: %.2f", media);

    return 0;
}