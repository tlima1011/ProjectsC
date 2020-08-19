#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, cont = 0, soma = 0;
    double media = 0;

    printf("Digite as idades.:\n");
    scanf("%d", &idade);
    if (idade < 0 )
    {
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else
    {
        while(idade >= 0){
            soma += idade;
            scanf("%d", &idade);
            cont += 1;
        }
        media = (double) soma / cont;
        printf("MEDIA = %.2lf\n", media);
     }
    return 0;
}
