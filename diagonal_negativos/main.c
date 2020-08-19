#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtde, i, j, qtde_negativos = 0;

    printf("Qual a ordem da matriz.: ");
    scanf("%d", &qtde);
    int mat[qtde][qtde];

    for(i = 0; i < qtde;i++){
        for(j = 0;j< qtde;j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("DIAGONAL PRINCIPAL:\n");
    for(i = 0; i <qtde; i++){
        for(j = 0; j < qtde ;j++){
            if (mat[i][j] < 0){
                qtde_negativos++;
            }
            if(i == j){
                printf("%d  ", mat[i][j]);
            }
        }
    }
    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", qtde_negativos);

    return 0;
}
