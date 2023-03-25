#include <stdio.h>


    int main()
    {
        float a, b, c;
        printf("Digite um numero: ");
        scanf("%f", &a);
        system("cls");
        printf("Digite um numero: ");
        scanf("%f", &b);
        system("cls");
        printf("Digite um numero: ");
        scanf("%f", &c);
        system("cls");

    if (a > b)
           if (b > c) printf("%4f\n%4f\n%4f\n", a, b, c);
           else
               if (a > c) printf("%4f\n%4f\n%4f\n", a, c, b);
               else printf("%4f\n%4f\n%4f\n", c, a, b);
    else
           if (b > c)
               if (a > c) printf("%4f\n%4f\n%4f\n", b, a, c);
               else printf("%4f\n%4f\n%4f\n", b, c, a);
           else printf("%4f\n%4f\n%4f\n", c ,b, a);
    return 0;
   }
