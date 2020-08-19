#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aux, horaInicial, horaFinal, duracao;

    printf("Hora inicial: ");
    scanf("%d", &horaInicial);
    printf("Hora final: ");
    scanf("%d", &horaFinal);
    duracao = 24;
    if (horaFinal > horaInicial){
        duracao = horaFinal - horaInicial;
    }else{
        duracao = (horaFinal + 24) - horaInicial;
    }
    printf("O JOGO DUROU %d HORA(S)", duracao);





    return 0;
}
