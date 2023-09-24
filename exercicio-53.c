#include <stdio.h>

unsigned int inverte(unsigned int numero) {
    unsigned int numeroInvertido = 0;

    while (numero > 0) {
        unsigned int digito = numero % 10;  
        numeroInvertido = numeroInvertido * 10 + digito;  
        numero /= 10;  
    }

    return numeroInvertido;
}

int main() {
    unsigned int numero;
    
    printf("Informe tres numeros inteiro positivo: ");
    scanf("%u", &numero);

    unsigned int numeroInvertido = inverte(numero);

    printf("Número invertido: %u\n", numeroInvertido);

    return 0;
}
