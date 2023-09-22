#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result;

    printf("Digite um símbolo de operação (+, -, / ou *): ");
    scanf(" %c", &op);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("Erro: Divisão por zero.\n");
            return 1;
        }
        break;
    default:
        printf("Operação inválida.\n");
        return 1;
    }

    printf("Resultado: %.2f\n", result);

    return 0;
}
