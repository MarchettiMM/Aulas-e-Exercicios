#include <stdio.h>
#include <stdlib.h>

int main()
{
   float p,a,imc;


   printf("INFORME O PESO: \n");
   scanf("%f", &p);
   printf("INFORME A ALTURA: \n");
   scanf("%f", &a);

   imc=p/(a*a);

   if (imc<18.5){
    printf("abaixo do peso");
   }
   if ((imc>=18.5)&&(imc<=24.9)){
    printf("peso normal");
   }
   if ((imc>=25)&&(imc<=29.9)){
    printf("acima do peso");
   }
   if (imc>=30){
    printf("obesidade");
   }



    return 0;
}
