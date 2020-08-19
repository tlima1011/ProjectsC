#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f = 1, n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        f *= i;
    }
    printf("FATORIAL = %d", f);

    return 0;
}
