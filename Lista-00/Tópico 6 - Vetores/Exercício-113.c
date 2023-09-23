#include <stdio.h>

// Função para verificar se um número é primo
int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Maior valor
    int maior_valor = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maior_valor) {
            maior_valor = arr[i];
        }
    }

    // Média dos valores
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += arr[i];
    }
    float media = (float)soma / n;

    // Valores em ordem crescente (usando o algoritmo de seleção)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Subconjunto de valores primos
    printf("Maior valor: %d\n", maior_valor);
    printf("Média dos valores: %.2f\n", media);
    printf("Valores em ordem crescente: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSubconjunto de valores primos: ");
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
