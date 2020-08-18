#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, tam_matriz, soma = 0;
    int mat[10][10];

    printf("Qual a ordem da matriz? ");
    scanf("%d", &tam_matriz);
    for(i = 0; i < tam_matriz;i++){
        for(j = 0;j < tam_matriz;j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < tam_matriz;i++){
        for(j = i + 1; j < tam_matriz;j++){
            soma += mat[i][j];
        }
    }
    printf("\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL: %d", soma);
    return 0;
}
