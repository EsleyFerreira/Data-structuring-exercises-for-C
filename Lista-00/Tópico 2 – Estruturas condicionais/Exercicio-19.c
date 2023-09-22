#include <stdio.h>

int main() {
    int mes, ano, dias;

    printf("Digite o mês (1 a 12): ");
    scanf("%d", &mes);
    
    if (mes < 1 || mes > 12) {
        printf("Mês inválido.\n");
        return 1;
    }

    printf("Digite o ano (que seja de 0 D.C. em diante): ");
    scanf("%d", &ano);

    if (ano < 0) {
        printf("Ano inválido.\n");
        return 1;
    }

    int bissexto = 0;
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        bissexto = 1;
    }

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        case 2:
            dias = bissexto ? 29 : 28;
            break;
        default:
            printf("Mês inválido.\n");
            return 1;
    }
    printf("O mês %d do ano %d tem %d dias.\n", mes, ano, dias);

    return 0;
}
