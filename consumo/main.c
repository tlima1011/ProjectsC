#include <stdio.h>
#include <stdlib.h>

int main()
{
    double distancia, consumoMedio, combustivel;

    printf("Distancia Percorrida: ");
    scanf("%lf", &distancia);
    printf("Combustivel gasto: ");
    scanf("%lf", &combustivel);
    consumoMedio = distancia / combustivel;
    printf("Consumo medio %.3lf\n", consumoMedio);

    return 0;
}
