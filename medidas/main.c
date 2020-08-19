#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida de A: ");
    scanf("%lf", &a);
    printf("Digite a medida de B: ");
    scanf("%lf", &b);
    printf("Diigite a medida de C: ");
    scanf("%lf", &c);
    //Area do Quadrado
    areaQuadrado = a * a;
    //Area do Triangulo
    areaTriangulo = (a * b ) / 2;
    //Area do Trapezio
    areaTrapezio =  ((a + b) * c) / 2;
    printf("AREA DO QUADRADO = %.4lf\n", areaQuadrado);
    printf("AREA DO TRIANGULO = %.4lf\n", areaTriangulo);
    printf("AREA DO TRAPEZIO = %.4lf\n", areaTrapezio);
    printf("\n");

    return 0;
}
