#include <stdio.h>
#include <math.h>

int main()
{
    //Largura de um terreno
    double base, altura, area, perimetro, diagonal;

    printf("Informe a base do retangulo: ");
    scanf("%lf", &base);
    printf("Informe a altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2 ) + pow(altura, 2));

    printf("AREA: %.4lf\n", area);
    printf("PERIMETRO: %.4lf\n", perimetro);
    printf("DIAGONAL: %.4lf\n", diagonal);

    return 0;
}
