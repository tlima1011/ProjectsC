#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutos;
    double valor;

    printf("Informe os minutos: ");
    scanf("%d", &minutos);
    valor = 50;
    if (minutos > 100){
        valor = valor + 2 * (minutos - 100);
    }
    printf("Valor a pagar R$%.2lf\n", valor);

    return 0;
}
