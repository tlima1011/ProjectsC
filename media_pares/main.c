#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, i, qtde, cont_pares = 0;
    double media_pares;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &qtde);
    int numeros[qtde];

    for(i = 0; i < qtde;i++){
        printf("Digite o %d. numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < qtde;i++){
        if (numeros[i] % 2 == 0){
            soma += numeros[i];
            cont_pares += 1;
        }
    }
    if (cont_pares != 0){
        media_pares = (double) soma / cont_pares;
        printf("MEDIA DOS PARES = %.1lf\n", media_pares);
    }else{
        printf("NENHUM PAR\n");
    }
    return 0;
}
