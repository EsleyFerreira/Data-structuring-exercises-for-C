#include <stdio.h>

int main() {
    char nome[100];
    int vezes;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Quantas vezes deseja repetir seu nome? ");
    scanf("%d", &vezes);

    for (int i = 0; i < vezes; i++) {
        printf("%s\n", nome);
    }

    return 0;
}
