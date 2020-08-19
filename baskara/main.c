#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a, b, c, delta, x1, x2;

    printf("Informe o coeficiente de A: ");
    scanf("%lf", &a);
    printf("Informe o coeficiente de B: ");
    scanf("%lf", &b);
    printf("Informe o coeficiente de C: ");
    scanf("%lf", &c);
    delta = pow(b, 2 ) - (4 * a * c);
    if ((a == 0) || (delta < 0)){
        printf("Esta equacao nao posui raizes reais\n");
    }else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }
    return 0;
}
