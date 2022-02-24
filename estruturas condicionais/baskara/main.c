#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double coeficienteA, coeficienteB, coeficienteC,delta, x1, x2;

    printf("Coeficiente a: ");
    scanf("%lf", &coeficienteA);
    printf("Coeficiente b: ");
    scanf("%lf", &coeficienteB);
    printf("Coeficiente c: ");
    scanf("%lf", &coeficienteC);

    delta = coeficienteB * coeficienteB - 4 * coeficienteA * coeficienteC;

    if (coeficienteA == 0 || delta <0){
        printf("Esta equacao nao possui raizes reais\n");
    }
    else{
        x1 = (-coeficienteB + sqrt(delta)) / (2*coeficienteA);
        x2 = (-coeficienteB - sqrt(delta)) / (2*coeficienteA);
        printf("x1 = %.4lf\n", x1);
        printf("x1 = %.4lf\n", x2);

    }

    return 0;
}
