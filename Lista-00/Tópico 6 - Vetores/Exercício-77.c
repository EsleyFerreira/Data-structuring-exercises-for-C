#include <stdio.h>

int main() {
    int vetor[10];
    int contador = 0;

    // Solicita a entrada dos valores
    printf("Digite 10 valores inteiros:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            contador++;
        }
    }

    // Exibe a quantidade de valores pares
    printf("O vetor possui %d valores pares.\n", contador);

    return 0;
}
