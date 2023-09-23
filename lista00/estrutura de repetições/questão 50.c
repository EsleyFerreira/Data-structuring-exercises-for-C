/*A nota final de Fund Prog I é calculada conforme a fórmula fornecida pelo professor no primeiro dia de aula. Após a primeira prova, primeira lista de exercícios e a primeira entrega do trabalho, os alunos têm muito interesse em saber de que nota precisam nas demais avaliações para serem aprovados. Faça um programa que:
Receba do usuário os valores das notas da primeira prova, primeira lista e se a proposta de trabalho foi entregue atrasada ou não (propostas em atraso geram uma penalidade de 20% na nota do projeto final).
Calcule e mostre todas as combinações possíveis de notas das demais avaliações (segunda prova, segunda lista e nota final do trabalho) que permitem que ele seja aprovado. Considerar que a resolução *(variação mínima) para cada uma das notas é de 1 ponto em 100.


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
