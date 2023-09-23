#include <stdio.h>

int main() {
    int inicio, fim, soma = 0;

    
    printf("Digite o valor de início da sequência: ");
    scanf("%d", &inicio);

    printf("Digite o valor de fim da sequência: ");
    scanf("%d", &fim);

   
    if (inicio >= fim) {
        printf("O valor de início deve ser menor que o valor de fim.\n");
        return 1; 
    }

    
    for (int i = inicio; i <= fim; i++) {
        soma += i;
    }

    
    printf("A soma dos números de %d a %d é %d\n", inicio, fim, soma);

    return 0; 
}
