#include <stdio.h>

int main() {
    float horasT, valorH, salario;

    printf("Digite o número de horas trabalhadas na semana: ");
    scanf("%f", &horasT);

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valorH);

    if (horasT <= 40) {
        salario = horasT  * valorH;
    } else if (horasT <= 60) {
        float horasN = 40;
        float horasEx = horasT - 40;
        salario = (horasN * valorH) + (horasEx * valorH * 1.5);
    } else {
        float horasN = 40;
        float horasEx50 = 20; // 60 - 40
        float horasEx100 = horasT - 60;
        salario = (horasN * valorH) + (horasEx50 * valorH * 1.5) + (horasEx100 * valorH * 2.0);
    }

    printf("O salário semanal é: %.2f\n", salario);

    return 0;
}
