#include <stdio.h>
#include <math.h>


int isPrime(int num) {
    if (num <= 1) {
        return 0;  
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  // É primo
}

int main() {
    int numeros[10];

    
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    
    printf("Números primos e suas posições:\n");
    for (int i = 0; i < 10; i++) {
        if (isPrime(numeros[i])) {
            printf("%d (Posição %d)\n", numeros[i], i);
        }
    }

    return 0;
}
