#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    for(i = 0; i <= x;i++){
        if (i % 2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
