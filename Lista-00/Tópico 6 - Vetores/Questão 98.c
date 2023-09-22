#include <stdio.h>

int main() {
    const int tamanho_vetor = 100;
    int vetor[tamanho_vetor];
    int contador = 0;
    int numero = 1;

    while (contador < tamanho_vetor) {
        if (numero % 7 != 0 && numero % 10 != 7)
            vetor[contador++] = numero;
        numero++;
    }

    for (int i = 0; i < tamanho_vetor; i++)
        printf("%d ", vetor[i]);

    return 0;
}
