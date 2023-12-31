//55. Fazer uma função que recebe um mês e um ano como parâmetros e retorna o número de dias daquele mês daquele ano. 
//Dica: um ano é bissexto quando é múltiplo de 4 e não múltiplo de 100, ou também quando é múltiplo de 400.

#include <stdio.h>
#include <string.h>

const char* nomeDoMes(int mes) {
    switch (mes) {
        case 1:
            return "Janeiro";
        case 2:
            return "Fevereiro";
        case 3:
            return "Março";
        case 4:
            return "Abril";
        case 5:
            return "Maio";
        case 6:
            return "Junho";
        case 7:
            return "Julho";
        case 8:
            return "Agosto";
        case 9:
            return "Setembro";
        case 10:
            return "Outubro";
        case 11:
            return "Novembro";
        case 12:
            return "Dezembro";
        default:
            return "Mês inválido";
    }
}

int verificaAnoBissexto(int ano) {
    // Verifica se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; // É bissexto
    } else {
        return 0; // Não é bissexto
    }
}

int numeroDeDias(int mes, int ano) {
    // Array com o número de dias em cada mês
    int diasNoMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Se o mês for fevereiro (2) e o ano for bissexto, atualize o número de dias
    if (mes == 2 && verificaAnoBissexto(ano)) {
        return 29;
    }

    // Retorne o número de dias do mês
    return diasNoMes[mes];
}

int main() {
    int mes, ano;
    printf("Digite o mês (1-12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes >= 1 && mes <= 12) {
        int dias = numeroDeDias(mes, ano);
        printf("O mês de %s do ano %d tem %d dias.\n", nomeDoMes(mes), ano, dias);
    } else {
        printf("Mês inválido. Por favor, digite um valor entre 1 e 12.\n");
    }

    return 0;
}
