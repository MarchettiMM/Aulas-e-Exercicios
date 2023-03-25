#include <stdio.h>
#include <stdlib.h>

// Cria um ranking de 3 atletas com a maior velocidade

int main()
{
    // Ler nome, nacionalidade e tempo
    int contador, atletaMaisRapido, velocidadeMaior = -1, segundaVelocidade = -1, terceiraVelocidade = -1;

    // Struct Atleta
    struct atleta
    {
        char nome[50];
        char nacionalidade[50];
        int tempo;
    };

    struct atleta atletas[10];

    for (contador = 0; contador < 10; contador++)
    {
        printf("Informe o nome do atleta nº %d\n", contador + 1);
        scanf("%s", &atletas[contador].nome);
        printf("Informe a nacionalidade do atleta nº %d\n", contador + 1);
        scanf("%s", &atletas[contador].nacionalidade);
        printf("Informe o tempo do atleta nº %d\n", contador + 1);
        scanf("%d", &atletas[contador].tempo);
        if (atletas[contador].tempo > velocidadeMaior)
        {
            velocidadeMaior = atletas[contador].tempo;
            atletaMaisRapido = contador;
        }
    }
    printf("Nome do Primeiro: %s\n", atletas[atletaMaisRapido].nome);
    printf("Nacionalidade do Primeiro: %s\n", atletas[atletaMaisRapido].nacionalidade);
    for (contador = 0; contador < 10; contador++)
    {
        if (atletas[contador].tempo < velocidadeMaior && atletas[contador].tempo > segundaVelocidade)
        {
            segundaVelocidade = atletas[contador].tempo;
            atletaMaisRapido = contador;
        }
    }
    printf("Nome do Segundo: %s\n", atletas[atletaMaisRapido].nome);
    printf("Nacionalidade do Segundo: %s\n", atletas[atletaMaisRapido].nacionalidade);
    for (contador = 0; contador < 10; contador++)
    {
        if (atletas[contador].tempo < segundaVelocidade && atletas[contador].tempo > terceiraVelocidade)
        {
            terceiraVelocidade = atletas[contador].tempo;
            atletaMaisRapido = contador;
        }
    }
    printf("Nome do Terceiro: %s\n", atletas[atletaMaisRapido].nome);
    printf("Nacionalidade do Terceiro: %s\n", atletas[atletaMaisRapido].nacionalidade);
    return 0;
}