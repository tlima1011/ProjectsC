#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma, x, y;
    soma = 0;
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    soma = x + y;

    printf("Soma = %d\n", soma);

    return 0;
}
