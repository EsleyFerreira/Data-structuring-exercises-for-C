#include <stdio.h>

int calcularMDC(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calcularMMC(int a, int b)
{
    return (a * b) / calcularMDC(a, b);
}

int main()
{
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int mmc = calcularMMC(num1, num2);

    printf("O MMC de %d e %d é: %d\n", num1, num2, mmc);

    return 0;
}
