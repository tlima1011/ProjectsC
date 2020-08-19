#include <stdio.h>
#include <stdlib.h>

int main()
{

    int duracao, resto, horas, minutos, segundos;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);
    horas = duracao / 3600;
    resto = duracao % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    printf("%d horas: %d minutos: %d segundos\n", horas, minutos, segundos);

    return 0;
}
