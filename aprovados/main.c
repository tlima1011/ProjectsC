#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtde, i;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &qtde);
    char nomes[qtde][50];
    double notas1[qtde];
    double notas2[qtde];
    double media[qtde];

    for(i = 0; i < qtde;i++){
       printf("Digite nome, primeira e segunda nota do %d. aluno: \n", i + 1);
       fseek(stdin,0,SEEK_END);
       gets(nomes[i]);
       scanf("%lf", &notas1[i]);
       scanf("%lf", &notas2[i]);
       media[i] = (notas1[i] + notas2[i]) / 2;
    }
    printf("Alunos Aprovados: \n");
    for (i = 0; i < qtde;i++){
        if(media[i] >= 6){
            printf("%s\n", nomes[i]);
        }
    }
    return 0;
}
