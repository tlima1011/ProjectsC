#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtde, pos_maior = 0;
    double maior = 0;

    printf("Quantos numeros voce ira digitar? ");
    scanf("%d", &qtde);
    double numeros[qtde];

    for(i = 0; i < qtde;i++){
        printf("Digite o %d. numero: ", i + 1);
        scanf("%lf", &numeros[i]);
    }

    for(i = 0; i < qtde; i++){
        if (numeros[i] > maior){
            maior = numeros[i];
            pos_maior = i;
        }
    }
    printf("\nMAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DE MAIOR VALOR = %d\n", pos_maior);
    return 0;
}
