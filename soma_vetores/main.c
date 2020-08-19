#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtde;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &qtde);
    int a [qtde];
    int b [qtde];
    int c [qtde];

    printf("Digite os valores do vetor A: \n");
    for(i = 0; i < qtde; i++){
        scanf("%d", &a[i]);
    }
    printf("Digite os valores do vetor B: \n");
    for(i = 0;i < qtde;i++){
        scanf("%d", &b[i]);
    }
    printf("VETOR RESULTANTE:\n");
    for(i = 0; i < qtde; i++){
        c[i] = a[i] + b[i];
        printf("%d\n", c[i]);
    }
    return 0;
}
