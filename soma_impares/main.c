#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, aux, soma = 0;
    printf("Digite dois numeros:\n");
    scanf("%d %d" , &x , &y);
    //scanf("%d", &y);
    if (x > y){
        aux = x;
        x = y;
        y = aux;
    }
    for (int i = x + 1; i < y; i++){
        if (i % 2 != 0){
            soma += i;
        }
    }
    printf("SOMA IMPARES = %d", soma);
    return 0;
}
