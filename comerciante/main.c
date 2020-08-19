#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtde, abaixo = 0, entre = 0, acima = 0;

    double lucro = 0, valotTotalCompra = 0, valorTotalVenda = 0, lucroTotal = 0, percentualLucro = 0;
    char porc = '%';

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &qtde);
    char produtos[qtde][50];
    double preco_compra[qtde];
    double preco_venda[qtde];
    for(i = 0; i < qtde; i++){
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        fseek(stdin,0,SEEK_END);
        gets(produtos[i]);
        printf("Preco de Compra R$");
        scanf("%lf", &preco_compra[i]);
        printf("Preco de Venda R$");
        scanf("%lf", &preco_venda[i]);
    }

    for(i = 0; i < qtde; i++){
        valotTotalCompra += preco_compra[i];
        valorTotalVenda += preco_venda[i];
        lucroTotal = valorTotalVenda - valotTotalCompra;
    }

    for(i = 0; i < qtde;i++){
        lucro = preco_venda[i] - preco_compra[i];
        percentualLucro = lucro * 100 / preco_compra[i];
        if (percentualLucro < 10){
            abaixo += 1;
        }else if (percentualLucro <= 20){
            entre += 1;
        }else{
            acima += 1;
        }
    }
    printf("\nRELATORIO: \n");
    printf("Lucro abaixo dos 10%c: %d\n", porc, abaixo);
    printf("Lucro entre 10%c e 20%c: %d\n", porc, porc, entre);
    printf("Lucro acima de 20%c: %d\n", porc, acima);
    printf("Valor total de compra R$%.2lf\n", valotTotalCompra);
    printf("Valor total de venda R$%.2lf\n", valorTotalVenda);
    printf("Lucro total R$%.2lf\n", lucroTotal);

    return 0;
}
