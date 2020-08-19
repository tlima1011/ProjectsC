#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;

    printf("Digite a senha: ");
    do{
        scanf("%d", &senha);
        if (senha != 2002){
            printf("Senha Invalida, Tente novamente: ");
        }
    }while(senha != 2002);
    printf("Acesso permitido!\n");
    return 0;
}
