#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[10], i, j;
    for (i=0;i<10;i++){
        printf ("Digite um numero: ");
        scanf ("%d", &vet[i]);
        }
    for(i=0;i<10;i++){
        for (j=i;j<11;j++){
            if (vet[i] == vet[j+1]){
                printf("\nNumeros repetidos: %d ", vet[i]);
            }
            else{
                printf("\t ");
            }
        }
    }
    return 0;
}
