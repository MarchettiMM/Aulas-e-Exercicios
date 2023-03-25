#include <stdio.h>
#include <stdlib.h>

int main()
{
     int mat[3][5],i,j,cont=0;
    for (i=0;i<3;i++)
    {
        printf ("Digite 5 numeros da linha %d da matriz.\n",i+1);
        for (j=0;j<5;j++)
        {
            scanf ("%d",&mat[i][j]);
        }
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            if (mat[i][j]<15)
            cont=cont+1;
        }
    }
    if (cont!=0)
    printf ("\nForam Digitados %d numero(s) menor(es) que 15.\n",cont);
    else

    return 0;
}
