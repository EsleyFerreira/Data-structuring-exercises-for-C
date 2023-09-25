#include <stdio.h>

int main() {
    int numero;
    int contador100 = 0;
    int contador200 = 0;
    int contadormaior200 = 0;

    for (int i = 0; i < 2; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numero);

        if (numero >= 0 && numero <= 100) {
            contador100++;
        } else if (numero >= 101 && numero <= 200) {
            contador200++;
        } else if (numero > 200) {
            contadormaior200++;
        }
    }

    printf("Quantidade de números entre 0 e 100: %d\n", contador100);
    printf("Quantidade de números entre 101 e 200: %d\n", contador200);
    printf("Quantidade de números maiores que 200: %d\n", contadormaior200);

    return 0;
}
