#include <stdio.h>
#include <stdlib.h>

int main(){
	  float r, peso;
	  int i;

	  printf("INFORME SUA MASSA CORPORAL: \n");
	  scanf("%f",&peso);
	  system("cls");
	  printf("ESCOLHA UM DOS PLANETAS PARA SABER SEU PESO POR LA: \n 1- Mercurio \n 2- Venus \n 3- Marte \n 4- Jupiter \n 5- Saturno \n 6- Urano\n");
      scanf("%i",&i);
      switch (i){
      	case 1:
   		r = peso*0.37;
		printf("SEU PESO SERA %.2f",r);
		break;
		case 2:
		r = peso*0.88;
		printf("SEU PESO SERA %.2f",r);
		break;
		case 3:
		r = peso*0.38;
		printf("SEU PESO SERA %.2f",r);
		break;
		case 4:
		r = peso*2.64;
		printf("SEU PESO SERA %.2f",r);
		break;
		case 5:
		r = peso*1.15;
		printf("SEU PESO SERA %.2f",r);
		break;
		case 6:
		r = peso*1.17;
		printf("SEU PESO SERA %.2f",r);
		break;
      	return 0;
	  }
}
