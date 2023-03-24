#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float CalculaVolume(float raio){
    return (pow(raio, 3) * 4/3 * 3.14);
}

int main()
{
    printf("Informe o valor do raio!\n");

    float raioInformado;
    scanf("%f", &raioInformado);

    float resultado = CalculaVolume(raioInformado);

    printf("O volume do círculo é: %.2f", resultado);

    return 0;
}
