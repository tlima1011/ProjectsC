#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, gasolina, alcool, diesel;
    gasolina = alcool = diesel = 0;
    do{
        printf("Informe um codigo (1,2,3) ou 4 para parar: ");
        scanf("%d", &codigo);
        switch (codigo){
        case 1:
            alcool += 1;
            break;
        case 2:
            gasolina += 1;
            break;
        case 3:
            diesel += 1;
        }
    }while(codigo != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    return 0;
}
