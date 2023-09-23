#include <stdio.h>

// Questão 101

int main() {
    int v[10]; 

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    printf("Valores ímpares:\n");
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 != 0) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");

    printf("Valores pares:\n");
    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            printf("%d ", v[i]);
        }
    }
    printf("\n");

    return 0;
}
