#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numero;

    printf("Deseja a tabuada de qual valor? ");
    scanf("%d", &numero);
    printf("TABUADA de %d\n", numero);
    for(i = 1; i <= 10; i++){
        printf(" %d X %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
