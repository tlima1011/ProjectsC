#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtde;
    double soma = 0, media = 0;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &qtde);
    double numeros[qtde];

    for(i = 0; i < qtde; i++){
        printf("Digite %d. numero: ", i + 1);
        scanf("%lf", &numeros[i]);
    }
    for(i = 0; i < qtde; i++){
        soma += numeros[i];
    }
    media = soma / qtde;
    printf("\nMEDIA DO VETOR = %.3lf\n", media);
    printf("ELEMENTOS ABAIXO DA MEDIA:\n");
    for(i = 0; i < qtde; i++){
        if(numeros[i] < media){
            printf("%.1lf\n", numeros[i]);
        }
    }
    return 0;
}
