#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, num[12];

   for(i=0; i<12; i++) {
    printf("Digite o %d numero: ", (i+1));
    scanf("%d", &num[i]);
    system("cls");
   }

   printf("Resultado:\n");
   for(i=11; i>=0; i--) {
    printf("%d |", num[i]);
   }
   return 0;
}
