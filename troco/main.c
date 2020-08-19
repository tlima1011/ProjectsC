#include <stdio.h>
#include <stdlib.h>

int main()
{
    double troco, preco_unitario, dinheiro, valor;
    int quantidade;

    printf("Preco Unitario do produto R$");
    scanf("%lf", &preco_unitario);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido R$");
    scanf("%lf", &dinheiro);
    valor = preco_unitario * quantidade;
    troco = dinheiro - valor;
    printf("TROCO R$%.2lf\n", troco);

    return 0;
}
