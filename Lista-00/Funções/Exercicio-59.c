#include <stdio.h>

float calculaValorDevido(float peso, float custo_fixo, float preco_kg, float largura_faixa, float desconto_faixa, float desconto_max) 
{
    float valor_total = custo_fixo;
    float peso_restante = peso;
    
    while (peso_restante > 0) 
    {
        if (peso_restante >= largura_faixa) 
        {
            valor_total += largura_faixa * preco_kg * (1.0 - desconto_faixa);
            peso_restante -= largura_faixa;
        } 
        else 
        {
            valor_total += peso_restante * preco_kg * (1.0 - desconto_faixa);
            peso_restante = 0;
        }
        
        if (desconto_faixa < desconto_max) 
        {
            desconto_faixa += 0.10;
        }
    }
    
    return valor_total;
}

int main() 
{
    float peso, custo_fixo, preco_kg, largura_faixa, desconto_faixa, desconto_max;
    
    printf("Peso da comida (em gramas): ");
    scanf("%f", &peso);
    printf("Custo fixo (em Reais): ");
    scanf("%f", &custo_fixo);
    printf("Preço por kg (em Reais): ");
    scanf("%f", &preco_kg);
    printf("Largura da faixa de desconto (em gramas): ");
    scanf("%f", &largura_faixa);
    printf("Desconto na faixa (inicialmente em %%): ");
    scanf("%f", &desconto_faixa);
    printf("Desconto máximo (em %%): ");
    scanf("%f", &desconto_max);

    float valor_devido = calculaValorDevido(peso, custo_fixo, preco_kg, largura_faixa, desconto_faixa / 100.0, desconto_max / 100.0);
    
    printf("Valor devido pelo cliente: R$%.2f\n", valor_devido);
    
    return 0;
}

