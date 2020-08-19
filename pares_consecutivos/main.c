#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, cont = 0, soma = 0 , x = 0;

    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
        if (x % 2 != 0){
            x += 1;
        }
        soma = 5 * x + 20;
    }while(x == 0);
    printf("SOMA = %d", soma);
    return 0;
}
