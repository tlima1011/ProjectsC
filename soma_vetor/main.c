#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtde;
    double media, soma = 0;

    printf("Quantos numeros voce ira digitar? ");
    scanf("%d", &qtde);
    double vetor[qtde];

    for(i = 0; i < qtde; i++){
        printf("Digite o %d. numero.: ", i + 1);
        scanf("%lf", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / qtde;
    printf("VALORES = ");
    for(i = 0; i < qtde;i++){
        printf("  %.1lf  ", vetor[i]);
    }
    printf("\n");
    printf("SOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf\n", media);

    return 0;
}
