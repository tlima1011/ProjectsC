#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtde, pares = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &qtde);
    int vet[qtde];

    for(i = 0; i < qtde; i++)
    {
        printf("Digite o %d. numero: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("NUMEROS PARES:\n ");
    for(i = 0; i < qtde; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("%d  ", vet[i]);
            pares += 1;
        }
    }
    printf("\n");
    printf("QUANTIDADE DE PARES: %d", pares);

    return 0;
}
