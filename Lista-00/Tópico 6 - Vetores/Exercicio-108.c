#include <stdio.h>

int main() {
    int a, b;
    int vetorSoma[5] = {0};

    printf("Digite dois números inteiros positivos menores que 10000:\n");
    printf("\nDigite o primeiro número (a): ");
    scanf("%d", &a);
    printf("\nDigite o segundo número (b): ");
    scanf("%d", &b);

    for (int i = 0; i < 4; i++) 
    {
        vetorSoma[i] += a % 10 + b % 10;
        a /= 10;
        b /= 10;
        if (vetorSoma[i] >= 10) 
        {
            vetorSoma[i] -= 10;
            vetorSoma[i + 1] = 1;
        }
    }
    
    printf("\nA soma de a e b é: ");
    for (int i = 4; i >= 0; i--) 
    {
        if (vetorSoma[i] != 0) 
        {
            for (int j = i; j >= 0; j--) 
            {
                printf("%d", vetorSoma[j]);
            }
            break;
        }
    }
    printf("\n");

    return 0;
}
