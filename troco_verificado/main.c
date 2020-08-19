#include <stdio.h>
#include <stdlib.h>

int main()
{
    double precoUnitario, dinheiro, troco, precoTotal;
    int quantidade;

    printf("Preco Unitario do produto R$");
    scanf("%lf", &precoUnitario);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido R$");
    scanf("%lf", &dinheiro);
    precoTotal = precoUnitario * quantidade;
    if (dinheiro < precoTotal){
        dinheiro = -1 * (dinheiro - precoTotal);
        printf("DINHEIRO INSUFICIENTE, FALTAM R$%.2lf", dinheiro);
    }else{
        troco = dinheiro - precoTotal;
        printf("TROCO = R$%.2lf", troco);
    }


    return 0;
}
