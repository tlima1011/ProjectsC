#include <stdio.h>
#include <stdlib.h>

int main()
{
    double dardo1, dardo2, dardo3, maior;

    printf("Digite as tres distancias: \n");
    scanf("%lf", &dardo1);
    scanf("%lf", &dardo2);
    scanf("%lf", &dardo3);
    if((dardo1 > dardo2) && (dardo1 > dardo3)){
        maior = dardo1;
    }else if ((dardo2 > dardo1) && (dardo2 > dardo3)){
        maior = dardo2;
    }else{
        maior = dardo3;
    }
    printf("MAIOR DISTANCIA = %.2lfm\n", maior);
    return 0;
}
