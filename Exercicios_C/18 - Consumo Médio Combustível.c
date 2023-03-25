#include <stdio.h>
#include <stdlib.h>

// Calcula o consumo médio de combustível de um carro

int main()
{
    float km, l, c;

    printf("Digite a quilometragem percorrida: \n");
    scanf("%f", &km);

    printf("Digite a quantidade de combustível consumido: \n");
    scanf("%f", &l);

    c = km / l;

    printf("O consumo médio é: \n");
    printf("%.3f km/l\n", c);
    return 0;
}