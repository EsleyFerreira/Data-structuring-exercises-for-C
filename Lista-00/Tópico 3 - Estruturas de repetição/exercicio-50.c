questão 50*/

#include <stdio.h>

int main() {
    float nota_prova, nota_exercicios, nota_trabalho, nota_final;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota_prova);

    printf("Digite a nota  de exercícios: ");
    scanf("%f", &nota_exercicios);

    printf("Digite a nota da primeira entrega do trabalho: ");
    scanf("%f", &nota_trabalho);

    nota_final = (nota_prova + nota_exercicios + nota_trabalho) / 3;

    printf("A nota final é: %.2f\n", nota_final);

    return 0;
}
