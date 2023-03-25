#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função para calcular o volume
float CalculaVolume(float raio)
{
    return (pow(raio, 3) * 4 / 3 * 3.14);
}

// Calcula o volume de um círculo

int main()
{
    float raioInformado;

    printf("Informe o valor do raio!\n");
    scanf("%f", &raioInformado);

    float resultado = CalculaVolume(raioInformado);
    printf("O volume do círculo é: %.2f", resultado);
    return 0;
}