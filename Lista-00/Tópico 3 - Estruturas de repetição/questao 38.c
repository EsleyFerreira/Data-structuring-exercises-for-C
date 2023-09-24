#include <stdio.h>

int main() {
    int numero, digito, encontrado = 0;

    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

   
    while (numero != 0) {
        digito = numero % 10; 
        if (digito == 3) {
            encontrado = 1;
            break;
        }
        numero /= 10; 
    }

    
    if (encontrado) {
        printf("O número contém o dígito 3 em alguma posição.\n");
    } else {
        printf("O número NÃO contém o dígito 3 em nenhuma posição.\n");
    }

    return 0;
}
