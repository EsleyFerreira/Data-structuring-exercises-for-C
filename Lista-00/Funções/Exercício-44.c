#include <stdio.h>

int main() {
    int numero1, numero2, n;
    
    // Solicite ao usuário os números e a quantidade de múltiplos
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    
    printf("Digite a quantidade de múltiplos: ");
    scanf("%d", &n);

    // Encontre os múltiplos simultâneos
    printf("Os primeiros %d múltiplos simultâneos de %d e %d são:\n", n, numero1, numero2);

    int contador = 0;
    int i = 1;

    while (contador < n) {
        if (i % numero1 == 0 && i % numero2 == 0) {
            printf("%d ", i);
            contador++;
        }
        i++;
    }

    printf("\n");

    return 0;
}
