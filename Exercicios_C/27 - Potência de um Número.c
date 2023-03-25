#include <stdio.h>
#include <stdio.h>

int main() {
  int num, expoente,potencia,cont;

  printf("Digite um numero inteiro: \n");
  scanf("%d", &num);
  printf("Digite um expoente: \n");
  scanf("%d", &expoente);

  potencia = 1;
  cont = 0;

  while (cont != expoente) {
    potencia = potencia * num;
    cont = cont + 1;
  }

  printf("\nO resultado eh: %d\n", potencia);
  return 0;
}
