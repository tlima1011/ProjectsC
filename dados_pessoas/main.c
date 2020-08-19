#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i, qtde, qtde_homens = 0, qtde_mulheres = 0, cont_mulheres = 0;
    double maior = 0, menor = 0, somaIdadeMulheres = 0, mediaAlturaMulheres = 0;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &qtde);
    char generos[qtde];
    double alturas[qtde];

    for(i = 0; i < qtde;i++){
        printf("Altura da %d. pessoa: ", i + 1);
        scanf("%lf", &alturas[i]);
        do{
            fseek(stdin,0,SEEK_END);
            printf("Genero da %d. pessoa: ", i + 1);
            scanf("%c", &generos[i]);
            generos[i] = toupper(generos[i]);
            if ((generos[i] != 'M') && (generos[i] != 'F')){
                printf("Invalido...Informe o genero [M]/[F]\n");
            }
        }while((generos[i] != 'M') && (generos[i] != 'F'));
    }

    maior = alturas[0];
    menor = alturas[0];
    for (i = 1; i < qtde; i++){
        if (alturas[i] > maior){
            maior = alturas[i];
        }
        if (alturas[i] < menor){
            menor = alturas[i];
        }
    }
    printf("\nMenor Altura = %.2lfm\n", menor);
    printf("Maior Altura = %.2lfm\n", maior);
    qtde_mulheres = 0;
    for(i = 0; i < qtde; i++){
        if (generos[i] == 'M'){
            qtde_homens += 1;
        }else if(generos[i] == 'F'){
            qtde_mulheres += 1;
            somaIdadeMulheres += alturas[i];
        }
    }
    mediaAlturaMulheres = somaIdadeMulheres / qtde_mulheres;
    printf("\nMedia das alturas das mulheres = %.2lfm\n", mediaAlturaMulheres);
    printf("Numero de homens = %d\n", qtde_homens);
    return 0;
}
