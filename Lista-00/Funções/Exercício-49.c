#include <stdio.h>

int main() {
    int anos = 0;
    double peso_espiga = 150; // Peso de uma espiga em gramas
    double peso_grao = 1;    // Peso de um grão em gramas
    double peso_colheita = 0; // Peso total da colheita
    
    while (peso_colheita < 100000000) { // 100 toneladas em gramas
        anos++;
        double colheita_anterior = peso_colheita * 0.1; // 10% não germinam
        double novos_graos = colheita_anterior * 2;     // Cada grão que germina produz dois grãos
        peso_colheita = novos_graos * peso_espiga;
    }

    printf("Serão necessários %d anos para colher mais de cem toneladas de milho.\n", anos);

    return 0;
}
