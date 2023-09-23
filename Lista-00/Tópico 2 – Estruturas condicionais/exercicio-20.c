#include <stdio.h>

int main() {
    int valor;
    int cedulas[6] = {100, 50, 20, 10, 5, 2}; // Valores das cédulas disponíveis
    int quantidades[6] = {0}; // Inicialize com zero para cada tipo de cédula

    printf("Digite o valor em reais (sem centavos): ");
    scanf("%d", &valor);

    int i;
    for (i = 0; i < 6; i++) {
        if (valor >= cedulas[i]) {
            quantidades[i] = valor / cedulas[i];
            valor = valor % cedulas[i];
        }
    }

    printf("R$ %d =", valor); // Imprimir o valor original
    for (i = 0; i < 6; i++) {
        if (quantidades[i] > 0) {
            printf(" %d cédula(s) de %d,", quantidades[i], cedulas[i]);
        }
    }
    printf("\n");

    return 0;
}
