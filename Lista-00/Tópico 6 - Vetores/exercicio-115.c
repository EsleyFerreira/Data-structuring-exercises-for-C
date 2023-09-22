#include <stdio.h>

int main() {
    int numeros[10];
    int pares[10];
    int impares[10];
    int contador_pares = 0;
    int contador_impares = 0;

    printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            pares[contador_pares] = numeros[i];
            contador_pares++;
        } else {
            impares[contador_impares] = numeros[i];
            contador_impares++;
        }
    }
  
    printf("Números pares:\n");
    for (int i = 0; i < contador_pares; i++) {
        printf("%d ", pares[i]);
    }
  
    printf("\nNúmeros ímpares:\n");
    for (int i = 0; i < contador_impares; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n");

    return 0;
}
