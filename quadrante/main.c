#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    do{
        printf("Digite o valor das coordenadas X e Y:\n");
        scanf("%d", &x);
        scanf("%d", &y);
        if (x > 0 && y > 0){
            printf("Quadrante Q1\n");
        }else if (x < 0 && y > 0){
            printf("Quadrante Q2\n");
        }else if (x < 0 && y < 0){
            printf("Quadrante Q3\n");
        }else if (x > 0 && y < 0) {
            printf("Quadrante Q4\n");
        }
    }while(x |= 0 && y != 0);
    return 0;
}
