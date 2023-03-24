#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, x[6];

   for(i=0; i<6; i++) {
    printf("Digite um valor: ");
    scanf("%d", &x[i]);
   }

   printf("Resultado:\n");
   for(i=5; i>=0; i--) {
    printf("%d\n", x[i]);
   }
   return 0;
}
