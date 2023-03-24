#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[10], i, j, aux;
    for (i=0;i<10;i++){
        printf ("Digite um numero: ");
        scanf ("%d", &vet[i]);
        }
    for(i=0;i<10;i++){
        for (j=i;j<11;j++){
            if (vet[i]>vet[i+1]) {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
        }
    }
    printf("\nNumero: %d", vet[i]);
    return 0;
}
