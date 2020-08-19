#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char temperatura;
    double f, c;

    printf("Voce vai digitar a temperatura em qual escala [C/F]? ");
    scanf("%c", &temperatura);
    temperatura = toupper(temperatura);
    switch (temperatura)
    {
    case 'F':
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &f);
        c = (f - 32) * 5 / 9;
        printf("Temperatura equivalente em Celsius: %.2lf", c);
        break;
    case 'C':
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &c);
        f = (c * 9 / 5) + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf ",f);
        break;
    default:
        printf("Invalido");
    }

    return 0;
}
