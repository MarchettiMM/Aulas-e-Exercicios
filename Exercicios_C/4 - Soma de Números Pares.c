#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, soma=0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    while (x != 0){
        if(x % 2 ==0){
            soma = soma + x;
        }
        x--;
    }
    printf("A soma dos numeros pares e: %d", soma);
    return 0;
}
