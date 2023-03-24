#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[4];
    int j, k, i[4];
    i[0]=1;
    i[1]=2;
    i[2]=3;
    i[3]=4;
    for(j=0; j<4; j++){
        printf("Digite um numero: ");
        scanf("%f", &x[j]);
        }
    for(j=0; j<4; j++){
        x[j] = x[j] + i[j];
        printf("A soma e: %.2f\n", x[j]);
    }

    return 0;
}
