#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, qtde, maior = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &qtde);
    int mat[qtde][qtde];

    for(i = 0; i < qtde;i++){
        for(j = 0;j < qtde;j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("MAIOR ELEMENTO DE CADA LINHA: \n");
    for(i = 0; i < qtde;i++){
        maior = mat[i][0];
        for(j = 0; j < qtde; j++){
            if (mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
        printf("%d\n", maior);
    }



    return 0;
}
