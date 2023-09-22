#include <stdio.h>

int main() {
    int num;

    printf("Digite um número entre 0 e 99: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 99) {
        if (num == 0) {
            printf("zero");
        } else if (num >= 1 && num <= 9) {
            const char *unidades[] = {"um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"};
            printf("%s", unidades[num - 1]);
        } else if (num >= 10 && num <= 19) {
            const char *dezenasEspeciais[] = {"dez", "onze", "doze", "treze", "catorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
            printf("%s", dezenasEspeciais[num - 10]);
        } else {
            const char *dezenas[] = {"", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
            const char *unidades[] = {"", " e um", " e dois", " e três", " e quatro", " e cinco", " e seis", " e sete", " e oito", " e nove"};
            printf("%s%s", dezenas[num / 10], unidades[num % 10]);
        }

        printf("\n");
    } else {
        printf("Número inválido\n");
    }

    return 0;
}
