#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,l,c;

  printf("DIGITE A QUILOMETRAGEM PERCORRIDA: \n");
  scanf("%f", &km);

  printf("DIGITE A QUANTIDADE DE COMBUSTiVEL CONSUMIDO: \n");
  scanf("%f", &l);

  c = km/l;

  printf("O CONSUMO MEDIO EH: \n");
  printf("%.3f KM/L\n", c);
    return 0;
}
