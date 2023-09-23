#include <stdio.h>


void lerValores(int valores[7]) {
    for (int i = 0; i < 7; i++) {
        printf("Digite o %dº valor inteiro: ", i + 1);
        scanf("%d", &valores[i]);
    }
}


void listarArray(int valores[7]) {
    for (int i = 0; i < 7; i++) {
        printf("Posição %d: %d\n", i, valores[i]);
    }
}


int pesquisarValor(int valores[7], int valorPesquisado) {
    for (int i = 0; i < 7; i++) {
        if (valores[i] == valorPesquisado) {
            return i;
        }
    }
    return -1; 
}


void substituirValores(int valores[7]) {
    if (valores[0] != 0) {
        return; 
    }

    for (int i = 1; i < 7; i++) {
        int soma = 0;
        for (int j = 0; j <= i; j++) {
            soma += valores[j];
        }
        valores[i] = soma;
    }
}

int main() {
    int valores[7];

    lerValores(valores);

    printf("Array com posições de armazenamento:\n");
    listarArray(valores);

    int valorPesquisado;
    printf("Digite um valor para pesquisar: ");
    scanf("%d", &valorPesquisado);

    int posicao = pesquisarValor(valores, valorPesquisado);
    if (posicao != -1) {
        printf("O valor %d está na posição %d no array.\n", valorPesquisado, posicao);
    } else {
        printf("O valor %d não está presente no array.\n", valorPesquisado);
    }

    substituirValores(valores);

    printf("Array após a substituição dos valores:\n");
    listarArray(valores);

    return 0;
}
