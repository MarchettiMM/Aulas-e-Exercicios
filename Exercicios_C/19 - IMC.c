#include <stdio.h>
#include <stdlib.h>

// Calcula o IMC de uma pessoa

int main()
{
    float p, a, imc;

    printf("Informe o peso: \n");
    scanf("%f", &p);
    printf("Informe a altura: \n");
    scanf("%f", &a);

    imc = p / (a * a);

    if (imc < 18.5)
    {
        printf("Abaixo do peso");
    }
    if ((imc >= 18.5) && (imc <= 24.9))
    {
        printf("Peso normal");
    }
    if ((imc >= 25) && (imc <= 29.9))
    {
        printf("Acima do peso");
    }
    if (imc >= 30)
    {
        printf("Obesidade");
    }
    return 0;
}