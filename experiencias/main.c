#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int qtde_cobaias, qtde, total = 0, cobaias, cont_coelho = 0, cont_sapo = 0, cont_rato = 0;
    char tipo;
    double perc_coelho = 0, perc_rato = 0, perc_sapo = 0;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &qtde);

    for (int i = 0; i < qtde; i++)
    {

        printf("Quantidade de cobaias: ");
        scanf("%d", &qtde_cobaias);

        printf("Tipo de Cobaia: [C] - Coelho ** [S] - Sapo * [R] - Rato: \n");
        fseek(stdin,0,SEEK_END);
        scanf("%c", &tipo);

        tipo = toupper(tipo);
        switch(tipo)
        {
        case 'C':
            cont_coelho += qtde_cobaias;
            break;
        case 'S':
            cont_sapo += qtde_cobaias;
            break;
        case 'R':
            cont_rato += qtde_cobaias;
            break;
        default:
           do {
                printf("Inválido, digite novamente as cobaias...\n");
                fseek(stdin,0,SEEK_END);
                printf("[C] - Coelho [S] - Sapo [R] - Rato: ");
                scanf("%c", &tipo);
                tipo = toupper(tipo);
           }while((tipo != 'C') && (tipo != 'R') && (tipo != 'S'));
        }
        total = cont_coelho + cont_rato + cont_sapo;
    }
    perc_coelho = (double) cont_coelho / total;
    perc_rato = (double) cont_rato / total;
    perc_sapo = (double) cont_sapo / total;

    printf("RELATORIO FINAL:\n ");
    printf("Total: %d cobaias.\n", total);
    printf("Total de coelhos: %d\n", cont_coelho);
    printf("Total de ratos: %d\n", cont_rato);
    printf("Total de sapos: %d\n", cont_sapo);
    printf("Percentual de coelhos: %.2lf \n", perc_coelho * 100);
    printf("Percentual de ratos: %.2lf\n", perc_rato * 100);
    printf("Percentual de sapos %.2lf\n", perc_sapo * 100);
    return 0;
}
