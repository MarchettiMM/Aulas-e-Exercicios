#include <stdio.h>
#include <stdlib.h>

// Cria uma calculadora das 4 operações básicas

int main()
{
    float a, b, c;

    printf("Digite dois números: \n");
    scanf("%f", &a);
    scanf("%f", &b);

    printf("Digite a operação que deseja executar (1:'+',2:'-',3:'*',4:'/'): \n");
    scanf("%f", &c);

    if (c == 1)
    {
        a = a + b;
        printf("Seu resultado é: %f\n", a);
    }
    if (c == 2)
    {
        a = a - b;
        printf("Seu resultado é: %f\n", a);
    }
    if (c == 3)
    {
        a = a * b;
        printf("Seu resultado é: %f\n", a);
    }
    if (c == 4)
    {
        a = a / b;
        printf("Seu resultado é: %f\n", a);
    }
    else
        printf("Comando inválido!");
    return 0;
}