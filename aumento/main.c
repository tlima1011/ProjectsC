#include <stdio.h>
#include <stdlib.h>

int main()
{
    double horasTrabalhadas, valorHora, aumento, porcentagem, salarioAtual, novoSalario;
    char porc;
    porc = '%';
    printf("Quantas horas trabalhadas: ");
    scanf("%lf", &horasTrabalhadas);
    printf("Qual valor hora R$");
    scanf("%lf", &valorHora);
    salarioAtual = horasTrabalhadas * valorHora;

    if (salarioAtual <= 1000){
        porcentagem = 0.20;
    }else if (salarioAtual <= 3000){
        porcentagem = 0.15;
    }else if (salarioAtual <= 8000){
        porcentagem = 0.10;
    }else{
        porcentagem = 0.05;
    }

    printf("SALARIO ATUAL DA PESSOA R$%.2lf\n", salarioAtual);
    aumento = salarioAtual * porcentagem;
    novoSalario = salarioAtual + aumento;
    printf("NOVO SALARIO = R$%.2lf\n", novoSalario);
    printf("AUMENTO = R$%.2lf\n", aumento);
    printf("Porcentagem = %.2lf%c\n", porcentagem * 100, porc);

    return 0;
}
