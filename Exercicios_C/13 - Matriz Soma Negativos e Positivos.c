#include <stdio.h>
#include <stdlib.h>

// Calcula a soma dos valores negativos e positivos em uma matriz

int main()
{
	float A[4][3];
	float somaPos = 0, somaNeg = 0;
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Digite valores positivos ou negativos: ");
			scanf("%f", &A[i][j]);
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (A[i][j] > 0)
				somaPos = somaPos + A[i][j];
			else
				somaNeg = somaNeg + A[i][j];
		}
	}
	printf("A soma dos positivos: %f\n", somaPos);
	printf("A soma dos negativos: %f", somaNeg);
	return 0;
}