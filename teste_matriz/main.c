#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i,j;

    printf("Quantas linhas tera a matriz.: ");
    scanf("%d", &m);
    printf("Quantas colunas tera a matriz.: ");
    scanf("%d", &n);

    int mat[m][n];
    for( i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nMATRIZ DIGITADA DO TIPO %d X %d:\n",m,n);
    for(i = 0; i < m; i++){
        for (j = 0; j < n;j++){
            printf("  %d  ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
