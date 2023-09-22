//Pode-se calcular a área de um polígono a partir das coordenadas de seus vértices utilizando a seguinte fórmula:
//Área = soma (X(n)*Y(n+1) – X(n)*Y(n-1)) / 2 sendo que:
//p/ n = 1, n-1 = N (número de vértices) p/ n = N, n+1 = 1 Escrever um programa em C que:
//receba o número de vértices N do usuário
//receba N pares de coordenadas (X,Y) dos vértices do polígono em arrays adequados.
//calcule e mostre a área segundo a fórmula acima.

#include <stdio.h>

// Função para calcular a área do polígono usando a fórmula de Shoelace
double calcularAreaShoelace(int coordenadas[][2], int numVertices) {
    double area = 0.0;

    // Loop para percorrer os vértices do polígono
    for (int i = 0; i < numVertices; i++) {
        // Coordenadas dos vértices adjacentes
        int x1 = coordenadas[i][0];
        int y1 = coordenadas[i][1];
        int x2 = coordenadas[(i + 1) % numVertices][0]; // O vértice seguinte ao último é o primeiro
        int y2 = coordenadas[(i + 1) % numVertices][1];

        // Calcula a parcela da área para este par de vértices e adiciona à área total
        area += (x1 * y2 - x2 * y1);
    }

    // Retorna o valor absoluto da área dividido por 2
    return (area < 0) ? -area / 2.0 : area / 2.0;
}

int main() {
    int numVertices;

    printf("Digite o número de vértices do polígono: ");
    scanf("%d", &numVertices);

    // Alocar dinamicamente espaço para armazenar as coordenadas dos vértices
    int coordenadas[numVertices][2];

    // Ler as coordenadas dos vértices
    for (int i = 0; i < numVertices; i++) {
        printf("Digite as coordenadas (X Y) do vértice %d: ", i + 1);
        scanf("%d %d", &coordenadas[i][0], &coordenadas[i][1]);
    }

    // Chamar a função para calcular a área e imprimir o resultado
    double area = calcularAreaShoelace(coordenadas, numVertices);
    printf("A área do polígono é: %.2lf unidades quadradas\n", area);

    return 0;
}
