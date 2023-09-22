#include <stdio.h>

int contemSequencia(int n1, int n2) {
    int n1_copy = n1; 

    while (n1_copy > 0) {
        int n1_temp = n1_copy;
        int n2_temp = n2;      

        while (n1_temp > 0 && n2_temp > 0) {
            if (n1_temp % 10 != n2_temp % 10) {
                break;
            }
            n1_temp /= 10;
            n2_temp /= 10;
        }

        if (n2_temp == 0) {
            return 1;
        }

        n1_copy /= 10;
    }

    return 0; 
}

int main() {
    int n1, n2;

    printf("Digite dois números inteiros positivos (n1 e n2): ");
    scanf("%d %d", &n1, &n2);

    if (contemSequencia(n1, n2)) {
        printf("O número %d contém a sequência de dígitos de %d.\n", n1, n2);
    } else {
        printf("O número %d não contém a sequência de dígitos de %d.\n", n1, n2);
    }

    return 0;
}
