#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j,m,n;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);
    int mat[m][n];
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("VALORES NEGATIVOS:\n");
    for(i = 0; i < m;i++){
        for(j = 0;j < n;j++){
            if(mat[i][j] < 0){
                printf("%d\n", mat[i][j]);
            }
        }
    }
    getch();
    return 0;
}
