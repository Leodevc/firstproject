#include <stdio.h>

int main ()
{
    float base;
    float altura;
    float area;

    printf("Digite o valor da base e da altura do triângulo para saber sua área: \n");

    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("O valor da area e: %f\n", area);

    return 0;
}