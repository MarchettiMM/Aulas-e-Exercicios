#include <stdio.h>
#include <stdlib.h>

//PROCEDIMENTO
void ImprimeSegundos(int horas, int minutos, int segundos){
    int segundosTotal;
    segundosTotal = horas*3600;
    segundosTotal += minutos*60;
    segundosTotal  += segundos;

    printf("O valor, em segundos, é de: %d", segundosTotal);
}

int main()
{
    int h, m, s;
    printf("Digite um valor para hora: ");
    scanf("%d", &h);
    printf("Digite um valor para minuto: ");
    scanf("%d", &m);
    printf("Digite um valor para segundo: ");
    scanf("%d", &s);
    ImprimeSegundos(h,m,s);
    return 0;
}
