#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menos16 = 0, soma_idades = 0, i, qtde;

    double media_altura, porc_menor, soma = 0;
    char porcentagem = '%';

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &qtde);
    char nomes[qtde][50];
    int idades[qtde];
    double alturas[qtde];

    for(i = 0; i < qtde; i++){
        printf("Dados da %d. pessoa:\n", i + 1);
        fseek(stdin,0,SEEK_END);
        printf("Nome: ");
        fseek(stdin,0,SEEK_END);
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    for(i = 0; i < qtde;i++){
        soma += alturas[i];
        soma_idades += 1;
        if(idades[i] < 16){
            menos16 += 1;
        }
    }
    media_altura = (double) soma / qtde;
    porc_menor = (double) menos16 / soma_idades;
    printf("\nAltura media: %.2lf\n", media_altura);
    printf("Pessoas com menos de 16 anos %.1lf%%\n", porc_menor * 100, porcentagem);
    for(i = 0; i < qtde;i++){
        if(idades[i] < 16){
            printf("%s\n",nomes[i]);
        }
    }
    getch();
