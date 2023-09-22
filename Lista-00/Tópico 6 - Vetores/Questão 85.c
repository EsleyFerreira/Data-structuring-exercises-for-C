//85. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.

#include <stdio.h>

int main() {
    int vetorNumerico[5];
    int menor = 0; // Inicializa com um valor mínimo possível
    int maior = 0; // Inicializa com um valor máximo possível
    int posicaoMenor = 0; // guarda a posição no aray do menor valor
    int posicaoMaior = 0; // guarda a posição no aray do maior valor

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetorNumerico[i]);

        // Verifica se o valor lido é menor ou maior
        if (i == 0 || vetorNumerico[i] < menor) {
            menor = vetorNumerico[i];
            posicaoMenor = i;
        }
        if (i == 0 || vetorNumerico[i] > maior) {
            maior = vetorNumerico[i];
            posicaoMaior = i;
        }
    }

    printf("Menor valor: %d (Posição %d)\n", menor, posicaoMenor);
    printf("Maior valor: %d (Posição %d)\n", maior, posicaoMaior);

    return 0;
}
