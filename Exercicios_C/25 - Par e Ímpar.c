#include<stdio.h>
#include<stdlib.h>

int main(){

	int h, i = 0, j = 0, num[20], par[20], impar[20];

	printf("Digite 20 numeros inteiros:\n\n");


	for (h = 0; h < 20; h++){

		scanf(" %d ", &num [h]);

		if (num [h] % 2 == 0) par [i++] = num [h];

		else      impar [j++] = num [h];
	}


	printf("\n\nNumeros pares: ");
	for(h = 0; h < i; h++)

		printf(" %d ", par [h]);

	printf("\n\nNumeros impares : ");
	for(i = 0; i < j ; i++)

		printf(" %d ", impar [i]);

	printf("\n\n");

	system("pause");

}
