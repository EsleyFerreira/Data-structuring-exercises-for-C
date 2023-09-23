#include <stdio.h>
#include <math.h>


int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0; 
    }
    if (numero <= 3) {
        return 1; 
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return 0; 
    }
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int numeros[10];

   
    for (int i = 0; i < 10; i++) {
        printf("Digite o %do número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

   
    printf("Números primos e suas posições:\n");
    for (int i = 0; i < 10; i++) {
        if (ehPrimo(numeros[i])) {
            printf("%d (posição %d)\n", numeros[i], i);
        }
    }

    return 0;
}
