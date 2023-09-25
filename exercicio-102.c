#include <stdio.h>

int main() {
    int numeros[6];
    int pares[6];
    int impares[6];
    int somapares = 0;
    int quantidadeimpares = 0;

    printf("Digite 6 números inteiros:\n");

    for (int i = 0; i < 6; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares[i] = numeros[i];
            somapares += numeros[i];
        } else {
            impares[quantidadeimpares] = numeros[i];
            quantidadeimpares++;
        }
    }

    printf("Números pares digitados: ");
    for (int i = 0; i < 6; i++) {
        if (pares[i] != 0) {
            printf("%d ", pares[i]);
        }
    }

    printf("\nSoma dos números pares: %d\n", somapares);

    printf("Números ímpares digitados: ");
    for (int i = 0; i < quantidadeimpares; i++) {
        printf("%d ", impares[i]);
    }

    printf("\nQuantidade de números ímpares: %d\n", quantidadeimpares);

    return 0;
}
