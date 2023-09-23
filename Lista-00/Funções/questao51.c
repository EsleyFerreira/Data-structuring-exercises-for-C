#include <stdio.h>

int situacao_aluno(float mediaf, int numFaltas, int quantHoras) 
{
    //Considere 1h/aula
    float frequencia = (float) (quantHoras - numFaltas) / quantHoras;

    if(mediaf >= 6.0 && frequencia >= 0.75)
    {
      return 1;
    }

    else 
    {
        return 0;
    }
}
  
int main() 
{
    float mediaf;
    int numf;
    int quanthoras;
    int resultado;
    
    printf("Digite a media final do aluno:");
    scanf("%f", &mediaf);
    
    printf("Digite a quantidade de faltas do aluno:");
    scanf("%d", &numf);
    
    printf("Digite a quantidade de horas do semestre:");
    scanf("%d", &quanthoras);
    
    resultado = situacao_aluno(mediaf,numf,quanthoras);
    
    if (resultado == 1 )
    {
        printf("Aluno aprovado");
    }
    else
    {
        printf("Aluno reprovado");
    }
    
}