#include <stdio.h>
#include <stdio.h>

// Imprime o fatorial do número digitado

int main()
{
    int f, n;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (f = 1; n > 1; n = n - 1)
        f = f * n;

    printf("Seu fatorial é: %d\n", f);
    return 0;
}