#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;


    printf("Digite dois numeros: \n");
    scanf("%f", &a);
    scanf("%f", &b);

    printf("Digite a operacao que deseja executar (1:'+',2:'-',3:'*',4:'/'): \n");
    scanf("%f", &c);

     if (c==1)
        {
        a=a+b;
        printf("Seu resultado eh %f\n", a);
    }
    if (c==2){
        a=a-b;
        printf("Seu resultado eh %f\n",a);
    }
    if (c==3){
        a=a*b;
        printf("Seu resultado eh %f\n", a);
    }
    if (c==4){
        a=a/b;
        printf("Seu resultado eh %f\n", a);
    }
    else printf("comando invalido");



    return 0;
}
