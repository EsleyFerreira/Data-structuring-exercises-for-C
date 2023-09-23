#include <stdio.h>

int main()
{
  int n = 10;
  float x[n];
  float soma = 0;

  printf("Digite os valores do vetor x:\n");
  for (int i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
        soma += x[i]; 
    }
    
    double media = soma / n;
    double somaQ = 0.0;
    
    for (int i = 0; i < n; i++)
    {
        double diferenca = x[i] - media;
        somaQ += diferenca * diferenca;
    }
    
    float desvioPadrao = somaQ / n;
    
    printf("Média dos valores: %.2lf", media);
    printf("\nDesvio padrão: %.2f", desvioPadrao);
    
    return 0;
}
