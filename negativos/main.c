#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, qtde;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &qtde);
    int vet[qtde];

    for(i = 0; i < qtde;i++){
        printf("Digite o %d. numero: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("NUMEROS NEGATIVOS:\n");
    for(i = 0; i < qtde;i++){
        if (vet[i] < 0){
            printf("%d\n", vet[i]);
        }
    }


    return 0;
}
