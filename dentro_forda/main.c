#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, n, fora, dentro;
    dentro = fora = 0;
    printf("Quantos numeros voce ira digitar? ");
    scanf("%d", &x);
    for(i = 1; i <= x; i++){
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n >= 10 && n <= 20){
            dentro += 1;
        }else{
            fora += 1;
        }
    }
    printf("%d DENTRO\n", dentro);
    printf("%d FORA\n", fora);
    return 0;
}
