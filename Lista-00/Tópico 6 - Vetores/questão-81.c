#include <stdio.h>

// Questão 81

int main() {
    int numeros[6]; 

    
    printf("Digite 6 valores inteiros pares:\n");
    for (int i = 0; i < 6; i++) {
        do {
            scanf("%d", &numeros[i]);
            
            if (numeros[i] % 2 != 0) {
                printf("Por favor, digite um valor inteiro par: ");
            }
        } while (numeros[i] % 2 != 0);
    }

    
    printf("Valores na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
