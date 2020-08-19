#include <stdio.h>
#include <stdlib.h>

int main()
{
    int casos, numerador, denominador;
    double divisao;

    printf("Quantos casos voce ira digitar: ");
    scanf("%d", &casos);
    for(int i = 0; i < casos; i++)
    {
        printf("Entre com o numerador: ");
        scanf("%d", &numerador);
        printf("Entre com o denominador: ");
        scanf("%d", &denominador);
        if (denominador == 0)
        {
            printf("DIVISAO IMPOSSIVEL\n");
        }
        else
        {
            divisao = (double) numerador / denominador;
            printf("DIVISAO = %.2lf\n", divisao);
        }
    }
    return 0;
}
