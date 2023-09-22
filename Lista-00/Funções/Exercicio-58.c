#include <stdio.h>

/* 58° -  Implementar a função cujo cabeçalho é apresentado a seguir:

unsigned char calculaParidade(unsigned char b);

Interferências, ruídos e outros fenômenos que prejudicam a integridade dos dados são problemas fundamentais quando computadores se comunicam em rede. Para detectar alterações em bits, os dados são sempre enviados com redundâncias computadas a partir dos bits originais. Este tipo de técnica de detecção de erros costuma receber o nome de checksum, e segue o mesmo princípio dos dígitos verificadores presentes em diversos documentos e identificadores numéricos (por exemplo, números de contas e agências bancárias).

Uma das técnicas de detecção de erros mais simples e mais usadas é o teste de paridade. Cada byte é enviado junto com um bit adicional, que indica se o número de bits com valor 1 no byte é par (bit redundante = 0) ou ímpar (bit redundante = 1). Por exemplo um byte com o valor 8 tem os bits 00001000, ou seja, apenas 1 bit “setado”, portanto a sua paridade é 1. Já um byte com o valor 0x55 é representado pelos bits 01010101 – 4 bits “setados”, portanto a sua paridade é 0.

A função calculaParidade deve receber como parâmetro um byte enviado ou recebido através de uma conexão, e retornar o valor do bit redundante (0 ou 1).
*/

int calcularParidade(char byte_recebido_enviado){
  int cont = 0;

  for(int i=0; i<8; i++){
    if((byte_recebido_enviado & (1<<i)) != 0){
      cont ++;
    }
  }

  if(cont % 2 == 0){
    return 0; //paridade 0 por ter quantidades de 1 no número binário par
  } else {
    return 1; //paridade 1 por ter quantidades de 1 no número binário impar
  }
}

int main(void) {

   char byte1 = 4; // Exemplo com paridade 1
   char byte2 = 15; // Exemplo com paridade 0

  int paridade1 = calcularParidade(byte1);
  int paridade2 = calcularParidade(byte2);

  printf("Paridade do byte1: %d\n", paridade1);
  printf("Paridade do byte2: %d\n", paridade2);
  
  return 0;
}
