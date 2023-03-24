#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 3, z = 5, res = 0;

    for(int i = 0; i < 1000; i++){
        if((i % x == 0 || i % z == 0)){
        res = res + i;
    }
}
    printf("A soma dos multiplos de 3 e 5 abaixo de 1000, e: %d", res);
    return 0;
}
