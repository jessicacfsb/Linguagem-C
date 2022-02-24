#include <stdio.h>
#include <stdlib.h>

int main()
{
    double largura, comprimento, valor, area, precoTotal;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);

    area = largura * comprimento ;
    precoTotal = area * valor;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", precoTotal);

    return 0;
}
