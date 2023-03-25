#include <stdio.h>
#include <stdlib.h>


int main()
{
    int vet[20],i,pi=0,maior;

    for(i=0;i<20;i++){
            printf("Informe os valores do vetor: ");
            scanf("%d", &vet[i]);
            system("cls");
        }


    maior = vet[0];
    for (i=0;i<20;i++){
    if (vet[i]>maior){
    maior= vet[i];
    pi=i;

                }
    }

    printf("O maior valor eh %d e sua posicao eh %d\n", maior, pi);
    return 0 ;
}
