#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, ordem, linha, coluna;
    double soma_positivos = 0;

    printf("Qual a ordem da Matriz? ");
    scanf("%d", &ordem);
    double mat[ordem][ordem];

    for(i = 0; i < ordem;i++){
        for(j=0;j<ordem;j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%lf", &mat[i][j]);
        }
    }
    for(i = 0; i < ordem;i++){
        for(j=0;j<ordem;j++){
            if (mat[i][j] > 0){
                soma_positivos += mat[i][j];
            }
        }
    }
    printf("\nSOMA DOS POSITIVOS: %.1lf\n", soma_positivos);

    printf("\nEscolha uma linha: ");
    scanf("%d", &linha);
    printf("LINHA ESCOLHIDA: ");
    for(j = 0; j < ordem;j++){
        printf("%.1lf  ", mat[linha][j]);
    }
    printf("\n");
    printf("\nEscolha uma coluna: ");
    scanf("%d", &coluna);
    printf("COLUNA ESCOLHIDA: ");
    for(i = 0; i < ordem;i++){
        printf("%.1lf  ", mat[i][coluna]);
    }
    printf("\n");
    printf("\nDIAGONAL PRINCIPAL: ");
    for(i = 0;i < ordem;i++){
        for(j = 0;j < ordem;j++){
            if (i == j){
                printf("%.1lf  ", mat[i][j]);
            }
        }
    }
    printf("\n");
    printf("\nMATRIZ ALTERADA: \n");
    for(i = 0;i < ordem;i++){
        for(j = 0;j < ordem;j++){
            if(mat[i][j] < 0){
                mat[i][j] = pow(mat[i][j],2);
                printf("%.1lf  ", mat[i][j]);
            }else{
                printf("%.1lf  ", mat[i][j]);
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
