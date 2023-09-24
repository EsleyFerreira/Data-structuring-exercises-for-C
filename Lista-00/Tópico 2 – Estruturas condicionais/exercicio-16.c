#include <stdio.h>

/*QUESTÃO 16: Fazer um programa que recebe duas notas parciais de um aluno (0 a 100) 
e informa se ele está aprovado (média maior ou igual a 70), em exame final (média entre 40 e 69) 
ou reprovado (média menor do que 40). Caso esteja em exame o programa deve pedir a nota do exame (0 a 100) 
e informar se o aluno está aprovado (média mais nota do exame maior ou igual a 100) 
ou reprovado (média mais nota do exame menor do que 100). */

int main() {
  double nota1, nota2, media, notaExame, mediaFinal = 0;

  int aprovado, ficouExameFinal = 0;

  printf("Digite a primeira nota (0 a 100): ");
  scanf("%lf", &nota1);
  printf("Digite a segunda nota (0 a 100): ");
  scanf("%lf", &nota2);
  media = (nota1 + nota2) / 2;

  if (media >= 70) {
    printf("Aluno aprovado!\n");
    aprovado = 1;
  } else if (media >= 40 && media <= 69) {
    ficouExameFinal = 1;
    printf("Aluno em exame. Digite a nota do exame (0 a 100): ");
    scanf("%lf", &notaExame);
    mediaFinal = (media + notaExame);

    if (mediaFinal >= 100) {
      aprovado = 1;
    } else {
      aprovado = 0;
    }

  } else {
    aprovado = 0;
  }

  char texto[100] = "O aluno foi %s com a media %s de %.2lf";
  char situacaoAluno[15];

  if (aprovado) {
    strcpy(situacaoAluno, "aprovado");
  } else {
    strcpy(situacaoAluno, "reprovado");
  }

  if (ficouExameFinal) {
    printf(texto, situacaoAluno, "final", mediaFinal);
  } else {
    printf(texto, situacaoAluno, "", media);
  }
  return 0;
}