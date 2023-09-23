#include <stdio.h>

// Questão 43
int Primo(int numero) {
    if (numero <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    int numero;
    
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    
    while (!Primo(--numero) && numero > 1);

    if (numero > 1) {
        printf("O maior número primo menor que o número digitado é: %d\n", numero);
    } else {
        printf("Não foi encontrado nenhum número primo menor que o número digitado.\n");
    }

    return 0;
}
