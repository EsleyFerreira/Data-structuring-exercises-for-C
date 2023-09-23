#include <stdio.h>

int main() {
    float valor1, valor2, valor3;

    // Solicita a entrada dos valores
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    // Inicializa as variáveis para menor, maior e intermediário
    float menor = valor1;
    float intermediario = valor1;
    float maior = valor1;

    // Verifica e atualiza os valores
    if (valor2 < menor) {
        menor = valor2;
    }
    if (valor2 > maior) {
        maior = valor2;
    }
    if (valor2 > menor && valor2 < maior) {
        intermediario = valor2;
    }

    if (valor3 < menor) {
        menor = valor3;
    }
    if (valor3 > maior) {
        maior = valor3;
    }
    if (valor3 > menor && valor3 < maior) {
        intermediario = valor3;
    }

    // Exibe os resultados
    printf("O menor valor é: %.2f\n", menor);
    printf("O valor intermediário é: %.2f\n", intermediario);
    printf("O maior valor é: %.2f\n", maior);

    return 0;
}
