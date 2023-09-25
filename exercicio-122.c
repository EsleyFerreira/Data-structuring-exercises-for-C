#include <stdio.h>

int main() {
    int n;
    printf("Digite o número de bois: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número de bois inválido.\n");
        return 1;
    }

    int identificadores[n];
    float pesos[n];
    int maisgordo = 0;
    int maismagro = 0;

    for (int i = 0; i < n; i++) {
        printf("Digite o identificador do boi %d: ", i + 1);
        scanf("%d", &identificadores[i]);
        printf("Digite o peso do boi %d: ", i + 1);
        scanf("%f", &pesos[i]);

        if (i == 0 || pesos[i] > pesos[maisgordo]) {
            maisgordo = i;
        }
        if (i == 0 || pesos[i] < pesos[maismagro]) {
            maismagro = i;
        }
    }

    printf("Lista de bois e seus pesos:\n");
    for (int i = 0; i < n; i++) {
        printf("Boi %d - Identificador: %d, Peso: %.2f\n", i + 1, identificadores[i], pesos[i]);
    }

    printf("Boi mais gordo: Identificador %d, Peso %.2f\n", identificadores[maisgordo], pesos[maisgordo]);
    printf("Boi mais magro: Identificador %d, Peso %.2f\n", identificadores[maismagro], pesos[maismagro]);

    return 0;
}


//---------------------------------------------------------------------------------------------------------------------//


#include <stdio.h>

#define NUMBOIS 10

int main() {
    int identificadores[NUMBOIS];
    float pesos[NUMBOIS];
    int maisgordo = 0;
    int maismagro = 0;

    for (int i = 0; i < NUMBOIS; i++) {
        printf("Digite o identificador do boi %d: ", i + 1);
        scanf("%d", &identificadores[i]);
        printf("Digite o peso do boi %d: ", i + 1);
        scanf("%f", &pesos[i]);

        if (i == 0 || pesos[i] > pesos[maisgordo]) {
            maisgordo = i;
        }
        if (i == 0 || pesos[i] < pesos[maismagro]) {
            maismagro = i;
        }
    }

    printf("Lista de bois e seus pesos:\n");
    for (int i = 0; i < NUMBOIS; i++) {
        printf("Boi %d - Identificador: %d, Peso: %.2f\n", i + 1, identificadores[i], pesos[i]);
    }

    printf("Boi mais gordo: Identificador %d, Peso %.2f\n", identificadores[maisgordo], pesos[maisgordo]);
    printf("Boi mais magro: Identificador %d, Peso %.2f\n", identificadores[maismagro], pesos[maismagro]);

    return 0;
}
