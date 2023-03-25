#include <stdio.h>
#include <stdlib.h>

// Peso de acordo com a gravidade dos planetas

int main()
{
	float r, peso;
	int i;

	printf("Informe sua massa corporal: \n");
	scanf("%f", &peso);
	system("cls");
	printf("Escolha um dos planetas para saber seu peso lá: \n 1- Mercúrio \n 2- Vênus \n 3- Marte \n 4- Júpiter \n 5- Saturno \n 6- Urano\n");
	scanf("%i", &i);
	switch (i)
	{
	case 1:
		r = peso * 0.37;
		printf("Seu peso será: %.2f", r);
		break;
	case 2:
		r = peso * 0.88;
		printf("Seu peso será: %.2f", r);
		break;
	case 3:
		r = peso * 0.38;
		printf("Seu peso será: %.2f", r);
		break;
	case 4:
		r = peso * 2.64;
		printf("Seu peso será: %.2f", r);
		break;
	case 5:
		r = peso * 1.15;
		printf("Seu peso será: %.2f", r);
		break;
	case 6:
		r = peso * 1.17;
		printf("Seu peso será: %.2f", r);
		break;
		return 0;
	}
}