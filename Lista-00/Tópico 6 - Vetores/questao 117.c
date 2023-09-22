#include <stdio.h>

int main() {
 float velocidades[60];
int maior_tempo_deslocamento = 0;
int inicio_frenagem_abrupta = 0;
int tempo_frenagem_abrupta = 0;
 float maior_aceleracao = 0;
int inicio_maior_aceleracao = 0;
int maior_tempo_velocidade_constante = 0;
  int tempo_velocidade_constante = 1; 

printf("Digite os dados de velocidade (60 valores em m/s):\n");
for (int i = 0; i < 60; i++) {
scanf("%f", &velocidades[i]);
}

for (int i = 1; i < 60; i++) {
float aceleracao = velocidades[i] - velocidades[i - 1];

 tempo_velocidade_constante = (velocidades[i] >= velocidades[i - 1]) ? (tempo_velocidade_constante + 1) : 1;
maior_tempo_velocidade_constante = (tempo_velocidade_constante > maior_tempo_velocidade_constante) ? tempo_velocidade_constante : maior_tempo_velocidade_constante;

if (aceleracao < 0 && aceleracao < maior_aceleracao) {
 inicio_frenagem_abrupta = i;
maior_aceleracao = aceleracao;
 tempo_frenagem_abrupta = 1;
} else if (aceleracao == maior_aceleracao) {
tempo_frenagem_abrupta++;
}

if (aceleracao > 0 && aceleracao > maior_aceleracao) {
maior_aceleracao = aceleracao;
inicio_maior_aceleracao = i;
}
}

printf("Maior período de tempo em que o veículo se deslocou sem diminuir a velocidade: %d segundos\n", maior_tempo_velocidade_constante);
printf("Instante de tempo em que o veículo iniciou a frenagem mais abrupta: %d segundos\n", inicio_frenagem_abrupta);
printf("Maior aceleração positiva: %.2f m/s², iniciada em %d segundos\n", maior_aceleracao, inicio_maior_aceleracao);

return 0;
