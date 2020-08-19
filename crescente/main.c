#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    do{
        printf("Digite dois numeros.:\n");
        scanf("%d", &x);
        scanf("%d", &y);
        if (x > y){
            printf("DECRESCENTE!\n");
        }else if (x < y){
            printf("CRESCENTE!\n");
        }else{
            break; //printf("\n");
        }
    }while(x != y);

    return 0;
}
