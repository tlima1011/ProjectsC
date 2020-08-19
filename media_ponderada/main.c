#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, casos;
    double num1, num2, num3, media;
    media = 0;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &casos);
    for(i = 0; i < casos;i++){
        media = 0;
        printf("Digite tres numeros:\n");
        scanf("%lf", &num1);
        scanf("%lf", &num2);
        scanf("%lf", &num3);
        media = (num1 * 2 + num2 * 3 + num3 * 5) / 10;
        printf("MEDIA PONDERADA = %.1lf\n", media);
    }



    return 0;
}
