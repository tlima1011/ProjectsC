#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    double valorHora, salario;
    int horasTrabalhadas;

    printf("Nome.: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome);
    printf("Valor por hora R$");
    scanf("%lf", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);
    salario = valorHora * horasTrabalhadas;
    printf("O pagamento para %s deve ser R$%.2lf\n", nome, salario);

    return 0;
}
