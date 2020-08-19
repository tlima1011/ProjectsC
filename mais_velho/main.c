#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtde, idade_maior = 0;

    printf("Quantas pessoas voce ira digitar? ");
    scanf("%d", &qtde);
    char nomes[qtde][50];
    char nome_velho[50];
    int idades[qtde];

    for(i = 0; i < qtde;i++){
        printf("Dados da %d. pessoa: \n", i + 1);
        printf("Nome: ");
        fseek(stdin,0,SEEK_END);
        gets(nomes[i]);
        printf("Idades: ");
        scanf("%d", &idades[i]);
    }
    for(i = 0; i < qtde;i++){
        if (idades[i] > idade_maior){
            idade_maior = idades[i];
            strcpy(nome_velho, nomes[i]);
        }
    }
    printf("PESSOA MAIS VELHA: %s com %d anos.", nome_velho, idade_maior);


    return 0;
}
