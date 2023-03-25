#include <stdio.h>
#include <stdio.h>
int main()
{
    int n, cont;

    printf("Digite um numero para calcular a sua tabuada: ");
    scanf("%d", &n);

    for (cont=0;cont<=10;++cont)
    {

        printf("%d X %d = %d\n",n,cont, n*cont);
    }

    return 0;
}
